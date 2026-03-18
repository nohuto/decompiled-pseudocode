/*
 * XREFs of ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4VIDMM_OPERATION@@@Z @ 0x1401141C4
 * Callers:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BB638 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 * Callees:
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall VidMmRecordEviction(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi

  result = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 280), a3);
    v12 = a4 - 102;
    if ( v12 )
    {
      v13 = v12 - 8;
      if ( v13 )
      {
        v14 = v13 - 90;
        if ( v14 )
        {
          if ( v14 == 7 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 288));
            _InterlockedAdd64((volatile signed __int64 *)(a1 + 296), a3);
LABEL_7:
            *(_QWORD *)(a2 + 104) += a3;
          }
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 320));
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 328), a3);
        }
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 352));
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 360), a3);
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 336));
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 344), a3);
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 272);
    *(_QWORD *)(a1 + 280) += a3;
    v9 = a4 - 102;
    if ( v9 )
    {
      v10 = v9 - 8;
      if ( v10 )
      {
        v11 = v10 - 90;
        if ( v11 )
        {
          if ( v11 != 7 )
            return result;
          ++*(_DWORD *)(a1 + 288);
          *(_QWORD *)(a1 + 296) += a3;
          goto LABEL_7;
        }
        ++*(_DWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 328) += a3;
      }
      else
      {
        ++*(_DWORD *)(a1 + 352);
        *(_QWORD *)(a1 + 360) += a3;
      }
    }
    else
    {
      ++*(_DWORD *)(a1 + 336);
      *(_QWORD *)(a1 + 344) += a3;
    }
  }
  return result;
}
