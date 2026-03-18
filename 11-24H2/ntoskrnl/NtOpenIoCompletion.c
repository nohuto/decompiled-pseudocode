/*
 * XREFs of NtOpenIoCompletion @ 0x140715190
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenIoCompletion(_QWORD *a1, int a2, int a3)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  int v8; // edx
  int v10; // [rsp+20h] [rbp-48h]
  _QWORD v11[4]; // [rsp+48h] [rbp-20h] BYREF

  v11[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v10 = a2;
  LOBYTE(a2) = PreviousMode;
  v8 = ObOpenObjectByName(a3, (_DWORD)IoCompletionObjectType, a2, 0, v10, 0LL, (__int64)v11);
  if ( v8 >= 0 )
    *a1 = v11[0];
  return (unsigned int)v8;
}
