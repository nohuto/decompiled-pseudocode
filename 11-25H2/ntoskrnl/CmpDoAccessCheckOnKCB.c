/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1407CBCA8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A15884 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcess @ 0x1404725F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     SeCreateAccessStateEx @ 0x1408F3A90 (SeCreateAccessStateEx.c)
 */

char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, int a3, char a4)
{
  char v8; // di
  int v9; // r9d
  int v10; // ecx
  char *v12; // rbx
  unsigned int CurrentThreadProcess; // eax
  __int64 v14; // r9
  char v15; // bl
  int AccessState; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[160]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[224]; // [rsp+100h] [rbp+0h] BYREF

  memset_0(v17, 0, sizeof(v17));
  memset_0(v18, 0, sizeof(v18));
  v8 = 0;
  LOBYTE(v9) = a4;
  LOBYTE(v10) = a4;
  if ( (int)ObCreateObjectEx(v10, (_DWORD)CmKeyObjectType, 0, v9) < 0 )
    return 0;
  MEMORY[0x38] = 0LL;
  MEMORY[0x40] = 0LL;
  MEMORY[0] = 1803104306;
  MEMORY[8] = 0LL;
  MEMORY[0x30] = 0;
  MEMORY[0x50] = 72LL;
  MEMORY[0x48] = 72LL;
  v12 = (char *)CmKeyObjectType + 76;
  CurrentThreadProcess = (unsigned int)PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(
                  (unsigned int)KeGetCurrentThread(),
                  CurrentThreadProcess,
                  (unsigned int)v17,
                  (unsigned int)v18,
                  a3,
                  (__int64)v12);
  if ( AccessState >= 0 )
  {
    LOBYTE(v14) = a4;
    MEMORY[8] = a1;
    v15 = CmpCheckKeyBodyAccess(0LL, a2, v17, v14, &AccessState);
    SeDeleteAccessState(v17);
    MEMORY[8] = 0LL;
    v8 = v15;
  }
  ObfDereferenceObject(0LL);
  return v8;
}
