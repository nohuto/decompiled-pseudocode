/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B983C
 * Callers:
 *     VidMmInitDevice @ 0x140041B40 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400BEE60 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400D364C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003DD1C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B9DA4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ @ 0x1400B9ED0 (-Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400F8528 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, char a2, struct VIDMM_PROCESS *a3)
{
  __int64 v6; // rax
  VIDMM_PROCESS *v7; // rcx
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int i; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  char *v15; // rax
  char *v16; // rsi
  unsigned int v17; // ebp
  __int64 v18; // rax
  char *v19; // rax
  char *v20; // rsi
  unsigned int j; // esi
  __int64 v22; // r14
  __int64 result; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // r9
  VIDMM_PHYSICAL_DEVICE *v27; // rcx
  int v28; // r15d
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // ebp
  __int64 v38; // rax
  char *v39; // rax
  char *v40; // rsi
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+20h] [rbp-58h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = *(_QWORD *)this;
    WdLogGlobalForLineNumber = 411;
  }
  if ( a3 )
  {
    v7 = a3;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v30 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v7 = *(VIDMM_PROCESS **)(v30 + 8);
    else
      v7 = 0LL;
  }
  else
  {
    v7 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40384LL);
  }
  *((_QWORD *)this + 1) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 420;
    DxgkLogInternalTriageEvent(v34, 0x40000LL);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v8 = VIDMM_PROCESS::OpenAdapter(v7, *(struct VIDMM_GLOBAL **)this);
    if ( v8 < 0 )
    {
      _InterlockedAdd(&dword_1400816C8, 1u);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 436;
      DxgkLogInternalTriageEvent(v35, 262145LL);
      return (unsigned int)v8;
    }
    *((_BYTE *)this + 58) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL));
  }
  v9 = 8LL * *((unsigned int *)this + 15);
  if ( !is_mul_ok(*((unsigned int *)this + 15), 8uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x61346956u, 256LL);
  *((_QWORD *)this + 5) = v10;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_140081860, 1u);
    WdLogSingleEntry0(6LL);
    v32 = 449;
    goto LABEL_46;
  }
  for ( i = 0; ; ++i )
  {
    v12 = *((unsigned int *)this + 15);
    if ( i >= (unsigned int)v12 )
    {
      if ( !*((_QWORD *)this + 3) && a3 )
      {
LABEL_37:
        v29 = qword_140081580;
        *((_QWORD *)this + 28) = v29 + VidMmiQuerySystemTime();
        return 0LL;
      }
      v13 = *((unsigned int *)this + 15);
      v14 = 32 * v12;
      if ( !is_mul_ok(v13, 0x20uLL) )
        v14 = -1LL;
      v15 = (char *)operator new[](v14, 0x38346956u, 256LL);
      v16 = v15;
      if ( v15 )
        `vector constructor iterator'(
          v15,
          32LL,
          v13,
          (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
      else
        v16 = 0LL;
      *((_QWORD *)this + 9) = v16;
      if ( v16 )
      {
        v17 = *((_DWORD *)this + 15);
        v18 = 32LL * v17;
        if ( !is_mul_ok(v17, 0x20uLL) )
          v18 = -1LL;
        v19 = (char *)operator new[](v18, 0x38346956u, 256LL);
        v20 = v19;
        if ( v19 )
          `vector constructor iterator'(
            v19,
            32LL,
            v17,
            (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
        else
          v20 = 0LL;
        *((_QWORD *)this + 10) = v20;
        if ( v20 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 96LL) & 2) == 0 )
            goto LABEL_26;
          v37 = *((_DWORD *)this + 15);
          v38 = 32LL * v37;
          if ( !is_mul_ok(v37, 0x20uLL) )
            v38 = -1LL;
          v39 = (char *)operator new[](v38, 0x38346956u, 256LL);
          v40 = v39;
          if ( v39 )
            `vector constructor iterator'(
              v39,
              32LL,
              v37,
              (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
          else
            v40 = 0LL;
          *((_QWORD *)this + 11) = v40;
          if ( v40 )
          {
LABEL_26:
            for ( j = 0; j < *((_DWORD *)this + 15); ++j )
            {
              v22 = 32LL * j;
              LOBYTE(v41) = a2;
              result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v22 + *((_QWORD *)this + 9), this, j, 1LL, v41);
              if ( (int)result < 0 )
                return result;
              LOBYTE(v42) = a2;
              result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v22 + *((_QWORD *)this + 10), this, j, 2LL, v42);
              if ( (int)result < 0 )
                return result;
              v24 = *((_QWORD *)this + 11);
              if ( v24 )
              {
                LOBYTE(v41) = a2;
                result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v24 + v22, this, j, 3LL, v41);
                if ( (int)result < 0 )
                  return result;
              }
            }
            goto LABEL_37;
          }
          WdLogSingleEntry0(1LL);
          v32 = 506;
        }
        else
        {
          WdLogSingleEntry0(1LL);
          v32 = 490;
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        v32 = 483;
      }
      v33 = 0x40000LL;
      goto LABEL_47;
    }
    v25 = (_QWORD *)operator new(24LL, 0x62346956u, 256LL);
    v26 = v25;
    if ( v25 )
    {
      *v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40232LL) + 8LL * i);
      v25[1] = this;
      v25[2] = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * i) = v26;
    v27 = *(VIDMM_PHYSICAL_DEVICE **)(*((_QWORD *)this + 5) + 8LL * i);
    if ( !v27 )
      break;
    v28 = VIDMM_PHYSICAL_DEVICE::Initialize(v27);
    if ( v28 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 466;
      DxgkLogInternalTriageEvent(v36, 0x40000LL);
      return (unsigned int)v28;
    }
  }
  _InterlockedAdd(&dword_140081864, 1u);
  WdLogSingleEntry0(6LL);
  v32 = 459;
LABEL_46:
  v33 = 262145LL;
LABEL_47:
  WdLogGlobalForLineNumber = v32;
  DxgkLogInternalTriageEvent(v31, v33);
  return 3221225495LL;
}
