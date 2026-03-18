/*
 * XREFs of NtQueryFullAttributesFile @ 0x1408A2080
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1408A2540 (IopCleanupExtraCreateParameters.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

__int64 __fastcall NtQueryFullAttributesFile(__int64 a1, unsigned __int64 a2)
{
  char PreviousMode; // si
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  __int64 result; // rax
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _DWORD v10[4]; // [rsp+50h] [rbp-258h] BYREF
  int v11; // [rsp+60h] [rbp-248h]
  int v12; // [rsp+70h] [rbp-238h]
  __int64 v13; // [rsp+80h] [rbp-228h]
  int v14; // [rsp+90h] [rbp-218h]
  __int16 v15; // [rsp+96h] [rbp-212h]
  int v16; // [rsp+A8h] [rbp-200h]
  __int128 *v17; // [rsp+B8h] [rbp-1F0h]
  char v18; // [rsp+D9h] [rbp-1CFh]
  char v19; // [rsp+DBh] [rbp-1CDh]
  _BYTE *v20; // [rsp+E0h] [rbp-1C8h]
  int v21; // [rsp+E8h] [rbp-1C0h]
  __int128 v22; // [rsp+F0h] [rbp-1B8h]
  __int128 v23; // [rsp+100h] [rbp-1A8h]
  struct _LIST_ENTRY *CurrentSilo; // [rsp+110h] [rbp-198h]
  __int128 v25; // [rsp+130h] [rbp-178h] BYREF
  __int128 v26; // [rsp+140h] [rbp-168h]
  __int128 v27; // [rsp+150h] [rbp-158h]
  __int64 v28; // [rsp+160h] [rbp-148h]
  _BYTE v29[272]; // [rsp+170h] [rbp-138h] BYREF

  memset_0(v29, 0, sizeof(v29));
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v5 = a2;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 55) = *(_BYTE *)(v5 + 55);
  }
  memset_0(v10, 0, 0xE0uLL);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v10[0] = 14680072;
  v15 = 7;
  v16 = 1;
  v14 = 2113536;
  v18 = 1;
  v19 = 1;
  v20 = v29;
  v13 = a1;
  v21 = 32;
  if ( PreviousMode )
    v17 = &v25;
  else
    v17 = (__int128 *)a2;
  v22 = 0LL;
  v23 = 0LL;
  CurrentSilo = 0LL;
  LOWORD(v22) = 40;
  CurrentSilo = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         a1,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (__int64)v10,
         (__int64)CurrentSilo,
         Handle);
  IopCleanupExtraCreateParameters(v10);
  if ( v12 == -1096154543 )
  {
    result = (unsigned int)v11;
    if ( v11 >= 0 && PreviousMode )
    {
      *(_OWORD *)a2 = v25;
      *(_OWORD *)(a2 + 16) = v26;
      *(_OWORD *)(a2 + 32) = v27;
      *(_QWORD *)(a2 + 48) = v28;
    }
  }
  else
  {
    if ( v7 >= 0 )
    {
      ObCloseHandle(Handle[0], PreviousMode);
      return (unsigned int)-1073741788;
    }
    return (unsigned int)v7;
  }
  return result;
}
