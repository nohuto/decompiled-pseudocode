/*
 * XREFs of PfpPrefetchRequest @ 0x140934A0C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PfPrefetchRequestVerify @ 0x140934C2C (PfPrefetchRequestVerify.c)
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchRequest(__int64 a1, KPROCESSOR_MODE a2)
{
  __int64 Pool2; // rbx
  unsigned int v5; // eax
  void *v6; // rcx
  NTSTATUS v7; // edi
  __int64 v8; // rdx
  _DWORD *v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  _DWORD *v12; // r12
  int v14; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h]

  Pool2 = 0LL;
  v14 = 0;
  if ( *(_DWORD *)(a1 + 8) == 5 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 < 0x80 )
    {
      v7 = -1073741306;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL, v5, 0x51526650u);
      P = (PVOID)Pool2;
      if ( Pool2 )
      {
        if ( a2 && *(_DWORD *)(a1 + 24) && (*(_QWORD *)(a1 + 16) & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        memmove((void *)Pool2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        if ( (unsigned int)PfPrefetchRequestVerify(Pool2, *(unsigned int *)(a1 + 24)) )
        {
          v7 = -1073741701;
        }
        else
        {
          v6 = *(void **)(Pool2 + 72);
          if ( v6 )
          {
            Object = 0LL;
            v7 = ObReferenceObjectByHandle(v6, 1u, (POBJECT_TYPE)ExEventObjectType, a2, &Object, 0LL);
            *(_QWORD *)(Pool2 + 72) = Object;
            if ( v7 < 0 )
              goto LABEL_17;
            v14 = 1;
          }
          v7 = PfpPrefetchRequestPerform(Pool2);
          v8 = *(unsigned int *)(Pool2 + 40);
          v9 = (_DWORD *)(v8 + Pool2);
          v10 = v8 + Pool2 + 48LL * *(unsigned int *)(Pool2 + 12);
          v11 = *(_QWORD *)(a1 + 16);
          v12 = (_DWORD *)(v8 + v11);
          if ( a2 )
            ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
          while ( (unsigned __int64)v9 < v10 )
          {
            *v12 ^= (*v9 ^ *v12) & 8;
            v9 += 12;
            v12 += 12;
          }
          *(_OWORD *)(v11 + 84) = *(_OWORD *)(Pool2 + 84);
          *(_OWORD *)(v11 + 100) = *(_OWORD *)(Pool2 + 100);
          *(_QWORD *)(v11 + 116) = *(_QWORD *)(Pool2 + 116);
          *(_DWORD *)(v11 + 124) = *(_DWORD *)(Pool2 + 124);
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  else
  {
    v7 = -1073741821;
  }
LABEL_17:
  if ( v14 )
    ObfDereferenceObject(*(PVOID *)(Pool2 + 72));
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v7;
}
