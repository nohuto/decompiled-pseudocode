/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010B060
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x140039CD4 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A44DC (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x140104CE0 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z @ 0x14010AA20 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX0@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(
        VIDMM_MEMORY_SEGMENT *this,
        void (*a2)(void *, void *),
        union _LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // edx
  char v9; // al
  int v10; // edx
  __int64 v11; // rcx
  __int64 result; // rax
  bool v13; // zf
  VIDMM_CPU_HOST_APERTURE *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  int v19; // ebp
  int v20; // ecx
  int v21; // edx
  __int64 v22; // r8
  char v23; // cl
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  int v28; // edi
  unsigned int v29; // esi
  VIDMM_CPU_HOST_APERTURE *v30; // rcx
  __int128 SystemInformation; // [rsp+50h] [rbp-48h] BYREF
  __int128 v32; // [rsp+60h] [rbp-38h]

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = *((unsigned __int16 *)this + 20);
    *(_QWORD *)(v6 + 32) = this;
    WdLogGlobalForLineNumber = 241;
  }
  v7 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v7 + 32) < 0x9006u )
    *((_DWORD *)this + 26) &= ~0x10u;
  v8 = *((_DWORD *)this + 26);
  if ( (v8 & 0x10) != 0 || (v9 = 0, (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 444LL) & 8) != 0) )
    v9 = 1;
  v10 = v8 | 0x10;
  *((_BYTE *)this + 514) = v9;
  *((_DWORD *)this + 26) = v10;
  if ( (v10 & 0x40) == 0 )
    goto LABEL_13;
  if ( *((_QWORD *)this + 11) > (unsigned __int64)(qword_140081620 - 0x800000) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 290;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 3221225473LL;
  }
  result = SysMmAllocateLogicalMemory(
             *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v7 + 24) + 224LL),
             *((_QWORD *)this + 9),
             this,
             (void **)this + 65);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 3) + 6976LL) += *((_QWORD *)this + 9);
LABEL_13:
    v13 = (*((_DWORD *)this + 26) & 0x2000) == 0;
    *((_QWORD *)this + 31) = *((_QWORD *)this + 9);
    if ( !v13 )
    {
      v14 = (VIDMM_CPU_HOST_APERTURE *)operator new(72LL, 0x35346956u, 256LL);
      if ( v14 )
      {
        *((_QWORD *)v14 + 5) = 0LL;
        *((_QWORD *)v14 + 6) = 0LL;
        *((_QWORD *)v14 + 7) = 0LL;
        *((_QWORD *)v14 + 8) = 0LL;
        *((_QWORD *)v14 + 1) = v14;
        *(_QWORD *)v14 = v14;
        *((_QWORD *)v14 + 3) = (char *)v14 + 16;
        *((_QWORD *)v14 + 2) = (char *)v14 + 16;
      }
      else
      {
        v14 = 0LL;
      }
      *((_QWORD *)this + 69) = v14;
      if ( !v14 )
      {
        _InterlockedIncrement(&dword_1400817D0);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 329;
        DxgkLogInternalTriageEvent(v15, 262145LL);
        return 3221225495LL;
      }
      v16 = VIDMM_CPU_HOST_APERTURE::Init(v14, this, *((_QWORD *)this + 7), *((_DWORD *)this + 16));
      v17 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(1LL, v16);
        WdLogGlobalForLineNumber = 337;
        DxgkLogInternalTriageEvent(v18, 0x40000LL);
        return v17;
      }
    }
    v19 = VIDMM_SEGMENT::Init(this, a2, 0LL);
    if ( v19 < 0 )
      goto LABEL_41;
    if ( (*((_DWORD *)this + 26) & 0x2000) == 0 )
      goto LABEL_41;
    if ( !*((_DWORD *)this + 28) )
      goto LABEL_41;
    v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 444LL);
    if ( (v20 & 0x8000) == 0 )
      goto LABEL_41;
    if ( (v20 & 0x10000) == 0 )
      goto LABEL_41;
    SystemInformation = 0LL;
    v32 = 0LL;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL) < 0 )
      goto LABEL_41;
    if ( DWORD2(v32) != 1 )
    {
      if ( DWORD2(v32) == 2 )
      {
LABEL_31:
        v21 = 4;
LABEL_33:
        v22 = *((unsigned int *)this + 104);
        v23 = 12;
        if ( v22 != 4096 )
          v23 = 16;
        v24 = (__int64)SystemInformation >> v23;
        v25 = (unsigned int)(v32 * HIDWORD(SystemInformation) * v21);
        LOBYTE(v3) = ((v22 - 1) & v25) != 0;
        v26 = (v25 >> v23) - 1 + ((__int64)SystemInformation >> v23) + v3;
        v27 = *((__int64 *)this + 7) >> v23;
        if ( v27 > (__int64)SystemInformation >> v23 )
          v24 = *((__int64 *)this + 7) >> v23;
        if ( v27 + (unsigned int)(*((_DWORD *)this + 16) - 1) < v26 )
          v26 = v27 + (unsigned int)(*((_DWORD *)this + 16) - 1);
        if ( v24 <= v26 )
        {
          v28 = v26 - v24;
          v29 = v24 - v27;
          WdLogSingleEntry2(4LL, v29, (unsigned int)(v28 + 1));
          v30 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 69);
          *((_DWORD *)this + 37) = v29 + v28;
          WdLogGlobalForLineNumber = 420;
          *((_DWORD *)this + 36) = v29;
          v19 = VIDMM_CPU_HOST_APERTURE::BlockRange(v30, (VIDMM_MEMORY_SEGMENT *)((char *)this + 120));
        }
        goto LABEL_41;
      }
      if ( DWORD2(v32) != 3 )
      {
        if ( DWORD2(v32) != 4 )
        {
LABEL_41:
          *((_BYTE *)this + 513) = 1;
          WdLogSingleEntry0(4LL);
          WdLogGlobalForLineNumber = 437;
          WdLogSingleEntry4(4LL, *((_QWORD *)this + 9), *((int *)this + 13));
          result = (unsigned int)v19;
          WdLogGlobalForLineNumber = 442;
          return result;
        }
        goto LABEL_31;
      }
    }
    v21 = 3;
    goto LABEL_33;
  }
  return result;
}
