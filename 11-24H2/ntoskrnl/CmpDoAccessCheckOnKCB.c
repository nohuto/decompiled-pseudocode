/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1407DB9B8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     SeCreateAccessStateEx @ 0x1408FCAF0 (SeCreateAccessStateEx.c)
 */

char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, int a3, char a4)
{
  char v7; // di
  int v8; // r9d
  int v9; // ecx
  char *v11; // rbx
  unsigned int CurrentThreadProcess; // eax
  char v13; // bl
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[160]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v16[224]; // [rsp+100h] [rbp+0h] BYREF

  memset_0(v15, 0, sizeof(v15));
  memset_0(v16, 0, sizeof(v16));
  v7 = 0;
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a4;
  if ( (int)ObCreateObjectEx(v9, (_DWORD)CmKeyObjectType, 0, v8) < 0 )
    return 0;
  MEMORY[0x38] = 0LL;
  MEMORY[0x40] = 0LL;
  MEMORY[0] = 1803104306;
  MEMORY[8] = 0LL;
  MEMORY[0x30] = 0;
  MEMORY[0x50] = 72LL;
  MEMORY[0x48] = 72LL;
  v11 = (char *)CmKeyObjectType + 76;
  CurrentThreadProcess = (unsigned int)PsGetCurrentThreadProcess();
  LODWORD(v14) = SeCreateAccessStateEx(
                   (unsigned int)KeGetCurrentThread(),
                   CurrentThreadProcess,
                   (unsigned int)v15,
                   (unsigned int)v16,
                   a3,
                   (__int64)v11);
  if ( (int)v14 >= 0 )
  {
    MEMORY[8] = a1;
    v13 = CmpCheckKeyBodyAccess(0LL, (__int64)&v14);
    SeDeleteAccessState(v15);
    MEMORY[8] = 0LL;
    v7 = v13;
  }
  ObfDereferenceObject(0LL);
  return v7;
}
