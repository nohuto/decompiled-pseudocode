/*
 * XREFs of PfpPrefetchRequest @ 0x140951060
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PfPrefetchRequestVerify @ 0x140951280 (PfPrefetchRequestVerify.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequest(__int64 a1, KPROCESSOR_MODE a2)
{
  __int64 Pool2; // rbx
  void *v5; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  _DWORD *v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // r15
  _DWORD *v11; // r12
  int v13; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h]

  Pool2 = 0LL;
  v13 = 0;
  if ( *(_DWORD *)(a1 + 8) == 5 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x80u )
    {
      v6 = -1073741306;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      P = (PVOID)Pool2;
      if ( Pool2 )
      {
        if ( a2 && *(_DWORD *)(a1 + 24) && (*(_QWORD *)(a1 + 16) & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        memmove((void *)Pool2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        if ( (unsigned int)PfPrefetchRequestVerify(Pool2, *(unsigned int *)(a1 + 24)) )
        {
          v6 = -1073741701;
        }
        else
        {
          v5 = *(void **)(Pool2 + 72);
          if ( v5 )
          {
            Object = 0LL;
            v6 = ObReferenceObjectByHandle(v5, 1u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
            *(_QWORD *)(Pool2 + 72) = Object;
            if ( v6 < 0 )
              goto LABEL_17;
            v13 = 1;
          }
          v6 = PfpPrefetchRequestPerform(Pool2);
          v7 = *(unsigned int *)(Pool2 + 40);
          v8 = (_DWORD *)(v7 + Pool2);
          v9 = v7 + Pool2 + 48LL * *(unsigned int *)(Pool2 + 12);
          v10 = *(_QWORD *)(a1 + 16);
          v11 = (_DWORD *)(v7 + v10);
          if ( a2 )
            ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
          while ( (unsigned __int64)v8 < v9 )
          {
            *v11 ^= (*v8 ^ *v11) & 8;
            v8 += 12;
            v11 += 12;
          }
          *(_OWORD *)(v10 + 84) = *(_OWORD *)(Pool2 + 84);
          *(_OWORD *)(v10 + 100) = *(_OWORD *)(Pool2 + 100);
          *(_QWORD *)(v10 + 116) = *(_QWORD *)(Pool2 + 116);
          *(_DWORD *)(v10 + 124) = *(_DWORD *)(Pool2 + 124);
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
  }
  else
  {
    v6 = -1073741821;
  }
LABEL_17:
  if ( v13 )
    ObfDereferenceObject(*(PVOID *)(Pool2 + 72));
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v6;
}
