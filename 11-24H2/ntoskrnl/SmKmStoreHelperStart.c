/*
 * XREFs of SmKmStoreHelperStart @ 0x140376CC8
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall SmKmStoreHelperStart(PVOID *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  HANDLE v6; // rcx
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, a2, 0LL, SmKmStoreHelperWorker, a1, 0LL, a3);
  if ( v4 >= 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v6 = Handle;
    v4 = v5;
    *a1 = Object;
    ObCloseHandle(v6, 0);
  }
  return (unsigned int)v4;
}
