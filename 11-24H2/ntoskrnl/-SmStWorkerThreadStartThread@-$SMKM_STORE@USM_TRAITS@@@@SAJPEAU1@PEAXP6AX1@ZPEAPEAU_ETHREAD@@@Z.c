/*
 * XREFs of ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403766A4
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     SmGetIdealProcessorFromNumaNode @ 0x140376530 (SmGetIdealProcessorFromNumaNode.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  int v5; // edx
  PVOID *p_Object; // rax
  int v9; // ebx
  NTSTATUS v10; // eax
  HANDLE v11; // rcx
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+78h] [rbp-8h]
  int v18; // [rsp+7Ch] [rbp-4h]
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF

  v17 = -1;
  v16[1] = v16;
  LODWORD(Object) = 0;
  v5 = *(_DWORD *)(a1 + 7588);
  v16[0] = v16;
  Handle = 0LL;
  v15 = 393216LL;
  v18 = 0;
  v14 = a1;
  if ( v5 )
  {
    LODWORD(Object) = SmGetIdealProcessorFromNumaNode(*(_QWORD *)(a1 + 7576), (unsigned int)(v5 - 1));
    p_Object = &Object;
  }
  else
  {
    p_Object = 0LL;
  }
  v9 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, a2, 0LL, a3, &v14, 0LL, p_Object);
  if ( v9 >= 0 )
  {
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v11 = Handle;
    v9 = v10;
    *a4 = Object;
    ObCloseHandle(v11, 0);
    Handle = 0LL;
    KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
    if ( v17 < 0 )
      v9 = v17;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v9;
}
