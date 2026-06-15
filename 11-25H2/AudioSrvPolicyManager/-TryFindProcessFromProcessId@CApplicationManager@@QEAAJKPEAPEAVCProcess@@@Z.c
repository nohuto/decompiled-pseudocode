/*
 * XREFs of ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18000C4D0
 * Callers:
 *     ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x18002A680 (-GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealit.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x18003B468 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedReality.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::TryFindProcessFromProcessId(RTL_SRWLOCK *this, int a2, struct CProcess **a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // rax
  signed __int32 *v8; // rdx
  signed __int32 i; // eax

  *a3 = 0LL;
  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  Ptr = this[16].Ptr;
  while ( Ptr )
  {
    v8 = (signed __int32 *)Ptr[2];
    Ptr = (_QWORD *)*Ptr;
    if ( !v8[104] && v8[40] == a2 )
    {
      for ( i = v8[5]; i != 0x7FFFFFFF; i = v8[5] )
      {
        if ( i == _InterlockedCompareExchange(v8 + 5, i + 1, i) )
          break;
      }
      *a3 = (struct CProcess *)v8;
      break;
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
