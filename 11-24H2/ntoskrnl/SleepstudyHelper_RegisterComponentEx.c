/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x140AC9430
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403D1F30 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperDestroyBlocker @ 0x1404778D0 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A192D0 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        PKSPIN_LOCK *a5)
{
  PKSPIN_LOCK *v5; // r14
  KSPIN_LOCK *v6; // rsi
  __int64 *v7; // rdi
  __int128 v8; // xmm1
  int v9; // eax
  int v10; // ebx
  PKSPIN_LOCK v11; // rax
  __int64 *v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  PKSPIN_LOCK v16; // [rsp+80h] [rbp+20h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  if ( a1 && a4 && a5 )
  {
    v8 = *a3;
    v15 = *a2;
    v14 = v8;
    v9 = SleepstudyHelperCreateBlockerFromGuid(a1, &v15, &v14, a4, 0, (__int64 *)&v13);
    v7 = v13;
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = SleepstudyHelperBuildBlocker((int *)v13, &v16);
      if ( v10 >= 0 )
      {
        v11 = v16;
LABEL_15:
        *v5 = v11;
        return (unsigned int)v10;
      }
      v6 = v16;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v7 )
    SleepstudyHelperDestroyBlockerBuilder(v7);
  if ( v6 )
    SleepstudyHelperDestroyBlocker(v6);
  if ( v10 == -1073741637 )
  {
    v11 = (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle;
    v10 = 0;
    goto LABEL_15;
  }
  return (unsigned int)v10;
}
