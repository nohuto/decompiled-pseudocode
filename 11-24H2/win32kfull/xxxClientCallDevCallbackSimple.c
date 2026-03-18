/*
 * XREFs of xxxClientCallDevCallbackSimple @ 0x1402BB738
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x14028C5E0 (EditionInputExtensibilityCallout.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxClientCallDevCallbackSimple(__int64 a1, __int128 *a2)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  int v7; // [rsp+30h] [rbp-138h] BYREF
  void *Src; // [rsp+38h] [rbp-130h] BYREF
  __int64 v9; // [rsp+40h] [rbp-128h] BYREF
  __int128 v10; // [rsp+48h] [rbp-120h] BYREF
  __int64 v11; // [rsp+58h] [rbp-110h]
  __int64 v12; // [rsp+60h] [rbp-108h]
  _BYTE v13[40]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+A8h] [rbp-C0h]
  __int128 v15; // [rsp+B0h] [rbp-B8h]
  __int128 v16; // [rsp+C0h] [rbp-A8h]
  __int128 v17; // [rsp+D0h] [rbp-98h]
  __int128 v18; // [rsp+E0h] [rbp-88h]
  __int128 v19; // [rsp+F0h] [rbp-78h]
  __int128 v20; // [rsp+100h] [rbp-68h]
  __int128 v21; // [rsp+110h] [rbp-58h]
  __int128 v22; // [rsp+120h] [rbp-48h]
  __int128 v23; // [rsp+130h] [rbp-38h]
  __int128 v24; // [rsp+140h] [rbp-28h]

  Src = 0LL;
  v7 = 0;
  memset_0(v13, 0, 0xD0uLL);
  v14 = a1;
  v15 = *a2;
  v16 = a2[1];
  v17 = a2[2];
  v18 = a2[3];
  v19 = a2[4];
  v20 = a2[5];
  v21 = a2[6];
  v22 = a2[7];
  v23 = a2[8];
  v24 = a2[9];
  EtwTraceBeginCallback(122LL);
  LODWORD(a1) = KeUserModeCallback(122LL, v13, 208LL, &Src, &v7);
  EtwTraceEndCallback(122LL);
  if ( (int)a1 < 0 || v7 != 24 )
    return 0LL;
  v9 = 0LL;
  RtlCopyFromUser(&v9, Src, 8uLL);
  v4 = v9;
  v12 = v9;
  if ( *((_DWORD *)a2 + 1) == 1 )
  {
    v5 = (void *)*((_QWORD *)Src + 2);
    v10 = 0LL;
    v11 = 0LL;
    RtlCopyFromUser(&v10, v5, 0x18uLL);
    *(__int128 *)((char *)a2 + 56) = v10;
    *((_QWORD *)a2 + 9) = v11;
  }
  return v4;
}
