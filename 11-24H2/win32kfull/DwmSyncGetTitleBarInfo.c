/*
 * XREFs of DwmSyncGetTitleBarInfo @ 0x14010B188
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x14010AFD8 (xxxGetTitleBarInfoEx.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14010B4C0 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmSyncGetTitleBarInfo(PVOID Object, __int64 a2, __int128 *a3, _DWORD *a4)
{
  int v8; // ebx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+44h] [rbp-BCh]
  int v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+6Ch] [rbp-94h]
  __int128 v32; // [rsp+74h] [rbp-8Ch]
  __int128 v33; // [rsp+84h] [rbp-7Ch]
  __int128 v34; // [rsp+94h] [rbp-6Ch]
  __int128 v35; // [rsp+A4h] [rbp-5Ch]
  __int128 v36; // [rsp+B4h] [rbp-4Ch]
  __int128 v37; // [rsp+C4h] [rbp-3Ch]
  __int128 v38; // [rsp+D4h] [rbp-2Ch]
  __int128 v39; // [rsp+E4h] [rbp-1Ch]
  __int64 v40; // [rsp+F4h] [rbp-Ch]
  int v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+100h] [rbp+0h]

  v8 = -1073741823;
  if ( Object )
  {
    v8 = DwmSyncLPCAllowed();
    if ( v8 >= 0 )
    {
      memset_0(&v28, 0, 0xC4uLL);
      v9 = *a3;
      v10 = a3[1];
      v31 = a2;
      v28 = 12845212;
      v30 = 1073741849;
      v27 = 196LL;
      v29 = 0x8000;
      v11 = *((_QWORD *)a3 + 16);
      v32 = v9;
      v12 = a3[2];
      v33 = v10;
      v13 = a3[3];
      v34 = v12;
      v14 = a3[4];
      v35 = v13;
      v15 = a3[5];
      v36 = v14;
      v16 = a3[6];
      v37 = v15;
      v38 = v16;
      v39 = a3[7];
      v40 = v11;
      v41 = *((_DWORD *)a3 + 34);
      v17 = LpcSendWaitReceivePort(Object, 0x20000LL, &v28, &v28, &v27, 0LL);
      v8 = v17;
      if ( v17 >= 0 )
      {
        if ( v17 == 192 || v17 == 258 || (unsigned __int8)v29 != 2 )
        {
          v8 = -1073741823;
        }
        else if ( (_DWORD)v32 == 140 )
        {
          v18 = v40;
          v19 = v33;
          *a3 = v32;
          v20 = v34;
          a3[1] = v19;
          v21 = v35;
          a3[2] = v20;
          v22 = v36;
          a3[3] = v21;
          v23 = v37;
          a3[4] = v22;
          v24 = v38;
          a3[5] = v23;
          v25 = v39;
          a3[6] = v24;
          a3[7] = v25;
          *((_QWORD *)a3 + 16) = v18;
          *((_DWORD *)a3 + 34) = v41;
          *a4 = v42;
        }
        else
        {
          v8 = -1073741453;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
