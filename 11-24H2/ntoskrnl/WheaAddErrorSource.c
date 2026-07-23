/*
 * XREFs of WheaAddErrorSource @ 0x1407C6DE0
 * Callers:
 *     WheaRegisterErrorSourceOverride @ 0x14065D170 (WheaRegisterErrorSourceOverride.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x1407C7280 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheapAddErrorSource @ 0x14065A358 (WheapAddErrorSource.c)
 *     WheapIsErrorSourceTypeAddable @ 0x14065A538 (WheapIsErrorSourceTypeAddable.c)
 *     WheapCallErrorSourceInitialize @ 0x14065BDF4 (WheapCallErrorSourceInitialize.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WheapInitializeErrorSource @ 0x1407C6CF0 (WheapInitializeErrorSource.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int v5; // edi
  __int64 Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // zf
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _DWORD Src[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v30[72]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+414h] [rbp+30Ch]
  char v37; // [rsp+418h] [rbp+310h]

  memset_0(v30, 0, 0x3CCuLL);
  v4 = 7LL;
  if ( WheapIsErrorSourceTypeAddable(a1) )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x430uLL, 0x61656857u);
    v7 = Pool2;
    if ( Pool2 )
    {
      v8 = Pool2 + 96;
      v9 = a1;
      v10 = 7LL;
      do
      {
        *(_OWORD *)v8 = *(_OWORD *)v9;
        *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)(v8 + 64) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)(v8 + 80) = *(_OWORD *)(v9 + 80);
        *(_OWORD *)(v8 + 96) = *(_OWORD *)(v9 + 96);
        v8 += 128LL;
        v11 = *(_OWORD *)(v9 + 112);
        v9 += 128LL;
        *(_OWORD *)(v8 - 16) = v11;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)v8 = *(_OWORD *)v9;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)(v9 + 16);
      *(_OWORD *)(v8 + 32) = *(_OWORD *)(v9 + 32);
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(v9 + 48);
      *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 64);
      *(_DWORD *)(v8 + 72) = *(_DWORD *)(v9 + 72);
      v5 = WheapInitializeErrorSource(v7);
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v7, 0x61656857u);
      }
      else
      {
        *(_QWORD *)(v7 + 56) = a2;
        WheapAddErrorSource(v12, v7);
        if ( WheapInitializationComplete )
          *(_DWORD *)(v7 + 108) = 2;
        v5 = WheapCallErrorSourceInitialize(v7, 1u);
        if ( v5 < 0 )
          *(_DWORD *)(v7 + 108) = 1;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  Src[3] = 0;
  v13 = v30;
  Src[0] = 1733060695;
  v14 = a1;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 977;
  do
  {
    v15 = *(_OWORD *)v14;
    v16 = *(_OWORD *)(v14 + 16);
    v14 += 128LL;
    *(_OWORD *)v13 = v15;
    v17 = *(_OWORD *)(v14 - 96);
    *((_OWORD *)v13 + 1) = v16;
    v18 = *(_OWORD *)(v14 - 80);
    *((_OWORD *)v13 + 2) = v17;
    v19 = *(_OWORD *)(v14 - 64);
    *((_OWORD *)v13 + 3) = v18;
    v20 = *(_OWORD *)(v14 - 48);
    *((_OWORD *)v13 + 4) = v19;
    v21 = *(_OWORD *)(v14 - 32);
    *((_OWORD *)v13 + 5) = v20;
    v22 = *(_OWORD *)(v14 - 16);
    *((_OWORD *)v13 + 6) = v21;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v22;
    --v4;
  }
  while ( v4 );
  v23 = *(_DWORD *)(a1 + 8) == 16;
  v24 = *(_QWORD *)(v14 + 64);
  v25 = *(_OWORD *)(v14 + 16);
  *(_OWORD *)v13 = *(_OWORD *)v14;
  v26 = *(_OWORD *)(v14 + 32);
  *((_OWORD *)v13 + 1) = v25;
  v27 = *(_OWORD *)(v14 + 48);
  *((_OWORD *)v13 + 2) = v26;
  *((_OWORD *)v13 + 3) = v27;
  *((_QWORD *)v13 + 8) = v24;
  *((_DWORD *)v13 + 18) = *(_DWORD *)(v14 + 72);
  if ( v23 )
  {
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v31 = 0LL;
    v35 = 0LL;
  }
  v36 = v5;
  v37 = 0;
  WheaLogInternalEvent(Src, (__int64)v13);
  return (unsigned int)v5;
}
