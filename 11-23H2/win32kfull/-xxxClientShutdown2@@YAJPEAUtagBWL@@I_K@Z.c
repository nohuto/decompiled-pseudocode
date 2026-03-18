/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00822D8
 * Callers:
 *     xxxClientShutdown @ 0x1C008224C (xxxClientShutdown.c)
 * Callees:
 *     DestroyWindowsTimers @ 0x1C008241C (DestroyWindowsTimers.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, int a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r15
  int v5; // r13d
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  v3 = (_QWORD *)((char *)a1 + 32);
  v15 = 0LL;
  v16 = 0LL;
  v4 = a3 & 0x108;
  v5 = a2;
  v6 = a3 & 0xC0000001;
  v7 = a3 & 0x100;
  while ( 1 )
  {
    if ( *v3 == 1LL )
      return 1LL;
    LOBYTE(a2) = 1;
    v8 = HMValidateHandleNoSecure(*v3, a2);
    v9 = v8;
    if ( v8 )
      break;
LABEL_3:
    ++v3;
  }
  ThreadLockAlways(v8, &v15);
  if ( v5 != 17 )
  {
    xxxSendMessage(v9, 22LL, v7 != 0, v6);
    v13 = 1;
    if ( v4 != 264 )
      goto LABEL_2;
    DestroyWindowsTimers(v9);
    goto LABEL_9;
  }
  if ( gptiCurrent == gptiShutdownNotify || xxxSendMessage(v9, 17LL, 0LL, v6) )
  {
LABEL_9:
    ThreadUnlock1(v11, v10, v12);
    goto LABEL_3;
  }
  v13 = 0;
LABEL_2:
  ThreadUnlock1(v11, v10, v12);
  if ( v13 )
    goto LABEL_3;
  return 3LL;
}
