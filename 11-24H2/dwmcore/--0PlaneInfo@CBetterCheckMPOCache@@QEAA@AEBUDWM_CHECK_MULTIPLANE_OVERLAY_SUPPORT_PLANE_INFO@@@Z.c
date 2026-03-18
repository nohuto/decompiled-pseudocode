/*
 * XREFs of ??0PlaneInfo@CBetterCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x1802B8AC8
 * Callers:
 *     ??0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x1802B8958 (--0CBetterCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CBetterCheckMPOCache::PlaneInfo *__fastcall CBetterCheckMPOCache::PlaneInfo::PlaneInfo(
        CBetterCheckMPOCache::PlaneInfo *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2)
{
  __m128i v3; // xmm1
  int v4; // r9d
  int v5; // r8d
  int v6; // r9d

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 4);
  *(_QWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 10) - *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
  v3 = *(__m128i *)((char *)a2 + 60);
  v4 = *((_DWORD *)a2 + 12);
  v5 = -*((_DWORD *)a2 + 11);
  *((_DWORD *)this + 10) = v3.m128i_i32[0] - *((_DWORD *)a2 + 11);
  v6 = -v4;
  *((_DWORD *)this + 11) = v6 + _mm_cvtsi128_si32(_mm_srli_si128(v3, 4));
  *((_DWORD *)this + 12) = v5 + _mm_srli_si128(v3, 8).m128i_u32[0];
  *((_DWORD *)this + 13) = v6 + _mm_cvtsi128_si32(_mm_srli_si128(v3, 12));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1));
  return this;
}
