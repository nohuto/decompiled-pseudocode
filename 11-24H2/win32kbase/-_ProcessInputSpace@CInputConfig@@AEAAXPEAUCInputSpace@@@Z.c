/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F4AC8
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1400A79CC (-PopulatePanelId@CInputSpaceRegion@@QEAAXXZ.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F4000 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rcx
  __m128i v4; // xmm6
  struct CInputSpaceRegion *v5; // rbx
  char *v6; // rsi
  __int64 UserSessionState; // rax
  struct _ERESOURCE *v8; // rcx
  int v9; // ebp
  char *v10; // rdi
  struct CInputSpaceRegion *v11; // r13
  int v12; // r15d
  _QWORD *v13; // r10
  int v14; // r14d
  int v15; // r12d
  _QWORD *v16; // rcx
  struct CInputSpaceRegion *v17; // rax
  struct CInputSpaceRegion *v18; // r8
  int v19; // ecx
  int v20; // r9d
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  __int16 v24; // ax
  struct CInputSpace *v25; // rdi
  __int64 v26; // r8
  _OWORD *v27; // rax
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+28h] [rbp-90h]
  __m128i v43; // [rsp+38h] [rbp-80h] BYREF
  int v44; // [rsp+48h] [rbp-70h]
  int v45; // [rsp+4Ch] [rbp-6Ch]
  struct CInputSpace *v46; // [rsp+50h] [rbp-68h]
  _QWORD v47[3]; // [rsp+58h] [rbp-60h] BYREF

  v46 = a2;
  if ( !CInputConfig::LockExclusivelyHeld((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 691);
  v4 = 0LL;
  v5 = 0LL;
  v6 = (char *)a2 + 1456;
  v43 = 0LL;
  UserSessionState = W32GetUserSessionState(v3);
  v8 = *(struct _ERESOURCE **)(UserSessionState + 18696);
  v47[0] = UserSessionState + 18696;
  ExEnterCriticalRegionAndAcquireResourceShared(v8);
  v47[1] = (char *)a2 + 1456;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
  v10 = (char *)a2 + 1456;
  v11 = 0LL;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
  v13 = 0LL;
  v14 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v15 = _mm_cvtsi128_si32((__m128i)0LL);
  while ( 1 )
  {
    v6 = *(char **)v6;
    v16 = v13;
    v47[2] = v6;
    v42 = v9;
    v45 = v14;
    v44 = v12;
    if ( v6 != v10 )
      v16 = v6 + 16;
    v41 = v15;
    if ( !v16 )
      break;
    v17 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v47);
    v18 = v17;
    v19 = *(_DWORD *)v17;
    v20 = *((_DWORD *)v17 + 4);
    if ( v15 >= *(_DWORD *)v17 )
      v15 = *(_DWORD *)v17;
    v43.m128i_i32[0] = v15;
    v15 = v19;
    if ( v41 < v19 )
      v15 = v41;
    v21 = *((_DWORD *)v17 + 1);
    v22 = *((_DWORD *)v17 + 2);
    if ( v12 >= v21 )
      v12 = v21;
    v43.m128i_i32[1] = v12;
    v12 = v21;
    if ( v44 < v21 )
      v12 = v44;
    if ( v14 <= v22 )
      v14 = v22;
    v43.m128i_i32[2] = v14;
    v14 = v22;
    if ( v45 > v22 )
      v14 = v45;
    v23 = *((_DWORD *)v18 + 3);
    if ( v9 <= v23 )
      v9 = *((_DWORD *)v18 + 3);
    v43.m128i_i32[3] = v9;
    v9 = v23;
    if ( v42 > v23 )
      v9 = v42;
    if ( (v20 & 1) != 0 )
      v11 = v18;
    v13 = 0LL;
    if ( !v5 || PtInRect(v18, 0LL) )
      v5 = v18;
    v24 = *((_WORD *)v18 + 10);
    if ( (unsigned __int16)v24 < 0x60u )
    {
      v24 = *((_WORD *)v18 + 11);
      if ( (unsigned __int16)v24 <= 0x60u )
        v24 = 96;
      *((_WORD *)v18 + 10) = v24;
    }
    if ( *((_WORD *)v18 + 11) == (_WORD)v13 )
      *((_WORD *)v18 + 11) = v24;
    if ( (v20 & 2) != 0 )
    {
      CInputSpaceRegion::PopulatePanelId(v18);
      v13 = 0LL;
    }
    v43.m128i_i64[0] = __PAIR64__(v12, v15);
    v43.m128i_i64[1] = __PAIR64__(v9, v14);
    v4 = _mm_loadu_si128(&v43);
  }
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v47[0]);
  v25 = v46;
  if ( v11 )
    v5 = v11;
  v26 = 5LL;
  *((_DWORD *)v46 + 10) = 0;
  v27 = (_OWORD *)((char *)v25 + 24);
  v28 = (_OWORD *)((char *)v25 + 736);
  *(__m128i *)((char *)v25 + 24) = v4;
  if ( v5 )
  {
    *((_DWORD *)v5 + 4) |= 1u;
    do
    {
      *v28 = *(_OWORD *)v5;
      v28[1] = *((_OWORD *)v5 + 1);
      v28[2] = *((_OWORD *)v5 + 2);
      v28[3] = *((_OWORD *)v5 + 3);
      v28[4] = *((_OWORD *)v5 + 4);
      v28[5] = *((_OWORD *)v5 + 5);
      v28[6] = *((_OWORD *)v5 + 6);
      v28 += 8;
      v29 = *((_OWORD *)v5 + 7);
      v5 = (struct CInputSpaceRegion *)((char *)v5 + 128);
      *(v28 - 1) = v29;
      --v26;
    }
    while ( v26 );
    *v28 = *(_OWORD *)v5;
    v28[1] = *((_OWORD *)v5 + 1);
    v28[2] = *((_OWORD *)v5 + 2);
    v28[3] = *((_OWORD *)v5 + 3);
    *((_QWORD *)v28 + 8) = *((_QWORD *)v5 + 8);
  }
  else
  {
    do
    {
      v30 = v27[1];
      *v28 = *v27;
      v31 = v27[2];
      v28[1] = v30;
      v32 = v27[3];
      v28[2] = v31;
      v33 = v27[4];
      v28[3] = v32;
      v34 = v27[5];
      v28[4] = v33;
      v35 = v27[6];
      v28[5] = v34;
      v36 = v27[7];
      v27 += 8;
      v28[6] = v35;
      v28 += 8;
      *(v28 - 1) = v36;
      --v26;
    }
    while ( v26 );
    v37 = v27[1];
    *v28 = *v27;
    v38 = v27[2];
    v28[1] = v37;
    v39 = v27[3];
    v40 = *((_QWORD *)v27 + 8);
    v28[2] = v38;
    v28[3] = v39;
    *((_QWORD *)v28 + 8) = v40;
    *((_WORD *)v25 + 378) = 96;
  }
  *((_WORD *)v25 + 22) = *((_WORD *)v25 + 378);
}
