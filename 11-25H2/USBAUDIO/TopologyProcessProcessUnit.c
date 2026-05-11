/*
 * XREFs of TopologyProcessProcessUnit @ 0x140031F00
 * Callers:
 *     TopologyBuildFilterTopology @ 0x140041E6C (TopologyBuildFilterTopology.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     USBCntrlGetSetProcessingUnitEnable @ 0x140039AC0 (USBCntrlGetSetProcessingUnitEnable.c)
 */

__int64 __fastcall TopologyProcessProcessUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v8; // r11d
  __int64 v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 i; // r8
  __int64 v13; // rcx
  __int64 result; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *a6;
  v9 = *(unsigned int *)(a2 + 64);
  v10 = a3 + 168LL * (unsigned int)*a5;
  v11 = (_QWORD *)(a4 + 16LL * *a6);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 32); *((_DWORD *)v11 - 1) = 1 )
  {
    v13 = 3 * i;
    ++v8;
    i = (unsigned int)(i + 1);
    *v11 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 4 * v13);
    v11 += 2;
    *((_DWORD *)v11 - 2) = *a5;
  }
  *a6 = v8;
  ++*a5;
  *(_DWORD *)(v10 + 80) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(v10 + 144) = USBCntrlGetSetProcessingUnitEnable;
  *(_QWORD *)(v10 + 136) = USBCntrlGetSetProcessingUnitValue;
  if ( (*(_DWORD *)(a2 + 76) & 1) == 0
    || (*(_BYTE *)(v10 + 72) = 1,
        LOBYTE(i) = -127,
        result = USBCntrlGetSetProcessingUnitEnable(a1, v10, i, v10 + 73),
        (int)result >= 0) )
  {
    if ( (unsigned int)v9 >= 8 )
    {
      v15[0] = 53975447;
      v15[1] = 1;
      v15[2] = -1073741637;
      RtlLogUnexpectedCodepath(v15, v11);
      return 3221225659LL;
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))ProcessSpecificRtnMap[v9])(a1, a2, v10);
    }
  }
  return result;
}
