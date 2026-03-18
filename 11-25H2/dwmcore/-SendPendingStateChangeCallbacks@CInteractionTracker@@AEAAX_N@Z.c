/*
 * XREFs of ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1800F4CD0
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18003B870 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18003DD8C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18003E2B8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1800F5774 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1800F5B60 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTracker::SendPendingStateChangeCallbacks(CInteractionTracker *this, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  bool v6; // zf
  __int64 v7; // r15
  char *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int v11; // esi
  unsigned int v12; // esi
  int v13; // eax
  float v14; // xmm2_4
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int16 v19; // r11
  __int64 ChannelCallbackId; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int16 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  float v26; // xmm2_4
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int16 v32; // r10
  CInteractionTracker *v33; // rcx
  __int64 v34; // rax
  __m128 v35; // xmm3
  __int64 v36; // xmm0_8
  __m128i v37; // xmm5
  __int64 v38; // rax
  __m128i v39; // xmm4
  int v40; // [rsp+30h] [rbp-E0h]
  int v41; // [rsp+30h] [rbp-E0h]
  int v42; // [rsp+30h] [rbp-E0h]
  __int64 v43; // [rsp+38h] [rbp-D8h]
  int v44; // [rsp+40h] [rbp-D0h]
  __int64 v45; // [rsp+90h] [rbp-80h] BYREF
  int v46; // [rsp+98h] [rbp-78h]
  __int64 v47; // [rsp+A0h] [rbp-70h]
  int v48; // [rsp+A8h] [rbp-68h]
  __int64 v49; // [rsp+B0h] [rbp-60h] BYREF
  int v50; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v51; // [rsp+C0h] [rbp-50h] BYREF
  int v52; // [rsp+C8h] [rbp-48h]
  __int64 v53; // [rsp+D0h] [rbp-40h] BYREF
  int v54; // [rsp+D8h] [rbp-38h]
  _QWORD v55[2]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v56[2]; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v58[9]; // [rsp+110h] [rbp+0h] BYREF
  _BYTE v59[56]; // [rsp+158h] [rbp+48h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+A8h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
         8LL);
  v5 = *((_DWORD *)this + 126);
  v6 = a2 == 0;
  v7 = v4;
  v8 = (char *)this + 480;
  v9 = v5 - 1;
  if ( v6 )
    v9 = v5;
  v10 = 0LL;
  while ( (unsigned int)v10 < (unsigned int)v9 )
  {
    if ( *((_DWORD *)this + 47) )
    {
      v13 = *(_DWORD *)(*(_QWORD *)v8 + 24 * v10 + 12);
      v14 = *(float *)(*(_QWORD *)v8 + 24 * v10 + 16);
      v45 = *(_QWORD *)(*(_QWORD *)v8 + 24 * v10 + 4);
      v46 = v13;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary((__int64)this, &v45, v14);
    }
    v15 = *(_DWORD *)(*(_QWORD *)v8 + 24 * v10);
    if ( v15 == 1 )
    {
      if ( v7 )
      {
        ChannelCallbackId = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
        v58[1] = *((unsigned int *)this + 18);
        LODWORD(v43) = *(unsigned __int8 *)(v21 + 24 * v10 + 20);
        v41 = *((_DWORD *)this + 49);
        v58[0] = ChannelCallbackId;
        CoreUICallSend(v7, v58, 2LL, 8LL, v23, v22, v41, v43, v44);
      }
    }
    else if ( v15 )
    {
      v28 = v15 - 2;
      if ( v28 )
      {
        if ( v28 != 1 )
          ModuleFailFastForHRESULT(-2147024809, retaddr);
        if ( v7 )
        {
          v29 = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v55[1] = *((unsigned int *)this + 18);
          LODWORD(v43) = *(unsigned __int8 *)(v30 + 24 * v10 + 20);
          v42 = *((_DWORD *)this + 49);
          v55[0] = v29;
          CoreUICallSend(v7, v55, 2LL, 8LL, v32, v31, v42, v43, v44);
        }
      }
      else
      {
        if ( CInteractionTracker::AreInteractionAnimationsAlive(this) || CInteractionTracker::HasDefaultAnimations(v33) )
        {
          v34 = CInteractionTracker::CalculateInertiaCallbackValues(this, v59);
          v35 = *(__m128 *)v34;
          v36 = *(_QWORD *)(v34 + 48);
        }
        else
        {
          v35 = *(__m128 *)((char *)this + 580);
          v36 = *(_QWORD *)((char *)this + 628);
        }
        v58[8] = v36;
        if ( v7 )
        {
          v56[0] = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
          v38 = *((unsigned int *)this + 18);
          v48 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8));
          v56[1] = v38;
          v50 = _mm_cvtsi128_si32(_mm_srli_si128(v39, 8));
          v52 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v35, 8));
          v47 = v37.m128i_i64[0];
          v49 = v39.m128i_i64[0];
          v51 = v35.m128_u64[0];
          CoreUICallSend(
            v7,
            v56,
            2LL,
            8LL,
            1,
            &unk_180336E6B,
            (unsigned int)&v51,
            _mm_shuffle_ps(v35, v35, 255).m128_f32[0],
            (unsigned int)&v49);
        }
        if ( *((_BYTE *)this + 634) )
          *((_BYTE *)this + 634) = 0;
      }
    }
    else
    {
      if ( v7 )
      {
        v16 = CNotificationResource::GetChannelCallbackId(this);
        v57[1] = *((unsigned int *)this + 18);
        LODWORD(v43) = *(unsigned __int8 *)(v17 + 24 * v10 + 20);
        v40 = *((_DWORD *)this + 49);
        v57[0] = v16;
        CoreUICallSend(v7, v57, 2LL, 8LL, v19, v18, v40, v43, v44);
      }
      *((_DWORD *)this + 49) = 0;
    }
    if ( !*((_DWORD *)this + 47) )
    {
      v24 = *((_QWORD *)this + 60);
      v25 = *(_DWORD *)(v24 + 24 * v10 + 12);
      v26 = *(float *)(v24 + 24 * v10 + 16);
      v53 = *(_QWORD *)(v24 + 24 * v10 + 4);
      v54 = v25;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary((__int64)this, &v53, v26);
    }
    v27 = 3 * v10;
    v10 = (unsigned int)(v10 + 1);
    *((_DWORD *)this + 47) = *(_DWORD *)(*((_QWORD *)this + 60) + 8 * v27);
  }
  if ( (_DWORD)v9 )
  {
    v11 = *((_DWORD *)this + 126);
    if ( (unsigned int)v9 > v11 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x23Du, 0LL);
    }
    else
    {
      v12 = v11 - v9;
      if ( v12 )
        memmove_0(*(void **)v8, (const void *)(*(_QWORD *)v8 + 24 * v9), 24LL * v12);
      *((_DWORD *)v8 + 6) = v12;
    }
  }
}
