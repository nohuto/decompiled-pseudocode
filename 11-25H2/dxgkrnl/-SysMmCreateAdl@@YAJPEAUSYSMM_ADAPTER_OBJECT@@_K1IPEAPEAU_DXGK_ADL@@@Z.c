/*
 * XREFs of ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140039F40
 * Callers:
 *     DxgkAllocateAdlCB @ 0x140039DD0 (DxgkAllocateAdlCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403C26E0 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmValidateParameters @ 0x14003A148 (SmmValidateParameters.c)
 *     SmmAllocateAdl @ 0x14003A298 (SmmAllocateAdl.c)
 *     SmmDetermineAdlType @ 0x14003A464 (SmmDetermineAdlType.c)
 *     SmmSetAdlBaseAddress @ 0x14003A4C8 (SmmSetAdlBaseAddress.c)
 *     SmmSetAdlPageArray @ 0x14003A594 (SmmSetAdlPageArray.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1400602E4 (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 */

__int64 __fastcall SysMmCreateAdl(
        struct SYSMM_ADAPTER_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _DXGK_ADL **a5)
{
  char *v5; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  struct SYSMM_ADL *Adl; // rax
  struct SYSMM_ADL *v14; // r14
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx

  v5 = (char *)a1 - 64;
  if ( !(unsigned __int8)SmmValidateParameters((char *)a1 - 64) )
    return 3221225485LL;
  v10 = a2 >> 12;
  v11 = a3 >> 12;
  ExAcquirePushLockExclusiveEx(v5 + 32, 0LL);
  if ( (*((_DWORD *)v5 + 11) & 1) == 0 && !*((_DWORD *)v5 + 12) )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 808;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Creating ADL against unlocked memory",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    ExReleasePushLockExclusiveEx(v5 + 32, 0LL);
    return 3221225485LL;
  }
  v12 = (unsigned int)SmmDetermineAdlType(a1, v5, a4);
  Adl = (struct SYSMM_ADL *)SmmAllocateAdl((unsigned int)v11, v12);
  v14 = Adl;
  if ( Adl )
  {
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        SmmSetAdlBaseAddress(a1, v5, Adl, (unsigned int)v10);
      }
      else if ( (_DWORD)v12 == 2 )
      {
        SmmSetAdlPageArray(v5, Adl, (unsigned int)v10);
      }
    }
    else
    {
      SmmBuildAdl(a1, (struct SYSMM_PHYSICAL_OBJECT *)v5, Adl, v10, v11);
    }
    ++*((_DWORD *)a1 + 8);
    if ( (dword_14015E600 & 0x20) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)v14 + 16LL) = a1;
      v16 = *((_QWORD *)v5 + 3);
      v17 = *(_QWORD **)v14;
      v18 = *(_QWORD **)(v16 + 8);
      if ( *v18 != v16 )
        __fastfail(3u);
      *v17 = v16;
      v17[1] = v18;
      *v18 = v17;
      *(_QWORD *)(v16 + 8) = v17;
    }
    *a5 = (struct SYSMM_ADL *)((char *)v14 + 8);
    ExReleasePushLockExclusiveEx(v5 + 32, 0LL);
    return 0LL;
  }
  else
  {
    *a5 = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 32, 0LL);
    return 3221225495LL;
  }
}
