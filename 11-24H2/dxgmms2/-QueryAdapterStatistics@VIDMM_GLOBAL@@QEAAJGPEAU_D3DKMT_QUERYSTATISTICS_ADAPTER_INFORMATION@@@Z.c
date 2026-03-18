/*
 * XREFs of ?QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x140113A50
 * Callers:
 *     VidMmQueryAdapterStatistics @ 0x140040190 (VidMmQueryAdapterStatistics.c)
 * Callees:
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryAdapterStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a3)
{
  unsigned int v4; // ecx
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  v4 = *((_DWORD *)this + 1736);
  v6 = a2;
  if ( a2 < v4 )
  {
    *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2) + 64LL);
    Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)a3 + 3) = 0LL;
    *((_QWORD *)a3 + 4) = *((_QWORD *)this + 889);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 1780);
    *((_DWORD *)a3 + 11) = *((_DWORD *)this + 1781);
    *((_DWORD *)a3 + 12) = *((_DWORD *)this + 1782);
    *((_DWORD *)a3 + 13) = *((_DWORD *)this + 1783);
    *((_DWORD *)a3 + 14) = *((_DWORD *)this + 1784);
    *((_DWORD *)a3 + 17) = *((_DWORD *)this + 1786);
    *((_DWORD *)a3 + 18) = *((_DWORD *)this + 1787);
    *((_DWORD *)a3 + 19) = *((_DWORD *)this + 1788);
    *((_DWORD *)a3 + 20) = *((_DWORD *)this + 1789);
    *((_DWORD *)a3 + 21) = *((_DWORD *)this + 1790);
    *((_DWORD *)a3 + 22) = *((_DWORD *)this + 1791);
    *((_DWORD *)a3 + 23) = *((_DWORD *)this + 1792);
    *((_DWORD *)a3 + 34) = *((_DWORD *)this + 1794);
    *((_DWORD *)a3 + 35) = *((_DWORD *)this + 1795);
    *((_DWORD *)a3 + 36) = *((_DWORD *)this + 1796);
    *((_DWORD *)a3 + 37) = *((_DWORD *)this + 1797);
    *((_QWORD *)a3 + 20) = *((_QWORD *)this + 900);
    *((_DWORD *)a3 + 38) = *((_DWORD *)this + 1798);
    *((_QWORD *)a3 + 22) = *((_QWORD *)this + 902);
    *((_DWORD *)a3 + 42) = *((_DWORD *)this + 1802);
    *((_QWORD *)a3 + 24) = *((_QWORD *)this + 904);
    *((_DWORD *)a3 + 46) = *((_DWORD *)this + 1806);
    *((_QWORD *)a3 + 26) = *((_QWORD *)this + 906);
    *((_DWORD *)a3 + 50) = *((_DWORD *)this + 1810);
    *((_QWORD *)a3 + 28) = *((_QWORD *)this + 908);
    *((_DWORD *)a3 + 54) = *((_DWORD *)this + 1814);
    *((_QWORD *)a3 + 30) = *((_QWORD *)this + 910);
    *((_DWORD *)a3 + 58) = *((_DWORD *)this + 1818);
    *((_QWORD *)a3 + 32) = *((_QWORD *)this + 912);
    *((_DWORD *)a3 + 62) = *((_DWORD *)this + 1822);
    *((_QWORD *)a3 + 34) = *((_QWORD *)this + 914);
    *((_DWORD *)a3 + 66) = *((_DWORD *)this + 1826);
    *((_QWORD *)a3 + 36) = *((_QWORD *)this + 918);
    *((_DWORD *)a3 + 70) = *((_DWORD *)this + 1834);
    *((_QWORD *)a3 + 38) = *((_QWORD *)this + 920);
    *((_DWORD *)a3 + 74) = *((_DWORD *)this + 1838);
    *((_QWORD *)a3 + 40) = *((_QWORD *)this + 922);
    *((_DWORD *)a3 + 78) = *((_DWORD *)this + 1842);
    *((_QWORD *)a3 + 41) = 0LL;
    *((_QWORD *)a3 + 43) = *((_QWORD *)this + 924);
    *((_DWORD *)a3 + 84) = *((_DWORD *)this + 1846);
    *((_QWORD *)a3 + 45) = *((_QWORD *)this + 926);
    *((_DWORD *)a3 + 88) = *((_DWORD *)this + 1850);
    *((_QWORD *)a3 + 47) = *((_QWORD *)this + 928);
    *((_DWORD *)a3 + 92) = *((_DWORD *)this + 1854);
    *((_QWORD *)a3 + 49) = *((_QWORD *)this + 930);
    *((_DWORD *)a3 + 96) = *((_DWORD *)this + 1858);
    *((_QWORD *)a3 + 51) = *((_QWORD *)this + 932);
    *((_DWORD *)a3 + 100) = *((_DWORD *)this + 1862);
    *((_QWORD *)a3 + 53) = *((_QWORD *)this + 934);
    *((_DWORD *)a3 + 104) = *((_DWORD *)this + 1866);
    *((_QWORD *)a3 + 54) = *((_QWORD *)this + 935);
    *((_QWORD *)a3 + 55) = *((_QWORD *)this + 936);
    *((_QWORD *)a3 + 56) = *((_QWORD *)this + 937);
    *((_QWORD *)a3 + 57) = *((_QWORD *)this + 938);
    *((_QWORD *)a3 + 58) = *((_QWORD *)this + 939);
    *((_QWORD *)a3 + 59) = *((_QWORD *)this + 940);
    *((_QWORD *)a3 + 60) = *((_QWORD *)this + 941);
    *((_QWORD *)a3 + 61) = *((_QWORD *)this + 942);
    *((_DWORD *)a3 + 126) = *((_DWORD *)this + 1886);
    *((_DWORD *)a3 + 127) = *((_DWORD *)this + 1887);
    *((_DWORD *)a3 + 128) = *((_DWORD *)this + 1888);
    *((_DWORD *)a3 + 129) = *((_DWORD *)this + 1889);
    *((_DWORD *)a3 + 130) = *((_DWORD *)this + 1890);
    *((_DWORD *)a3 + 131) = *((_DWORD *)this + 1891);
    *((_DWORD *)a3 + 132) = *((_DWORD *)this + 1892);
    *((_QWORD *)a3 + 68) = *((_QWORD *)this + 948);
    *((_DWORD *)a3 + 134) = *((_DWORD *)this + 1894);
    *((_QWORD *)a3 + 70) = *((_QWORD *)this + 950);
    *((_DWORD *)a3 + 138) = *((_DWORD *)this + 1898);
    *((_QWORD *)a3 + 72) = *((_QWORD *)this + 952);
    *((_DWORD *)a3 + 142) = *((_DWORD *)this + 1902);
    *((_QWORD *)a3 + 74) = *((_QWORD *)this + 954);
    *((_DWORD *)a3 + 146) = *((_DWORD *)this + 1906);
    *((_QWORD *)a3 + 76) = *((_QWORD *)this + 956);
    *((_DWORD *)a3 + 150) = *((_DWORD *)this + 1910);
    *((_QWORD *)a3 + 78) = *((_QWORD *)this + 958);
    *((_DWORD *)a3 + 154) = *((_DWORD *)this + 1914);
    *((_QWORD *)a3 + 80) = *((_QWORD *)this + 960);
    *((_DWORD *)a3 + 158) = *((_DWORD *)this + 1918);
    *((_QWORD *)a3 + 82) = *((_QWORD *)this + 962);
    *((_DWORD *)a3 + 162) = *((_DWORD *)this + 1922);
    *((_QWORD *)a3 + 84) = *((_QWORD *)this + 964);
    *((_DWORD *)a3 + 166) = *((_DWORD *)this + 1926);
    *((_QWORD *)a3 + 86) = *((_QWORD *)this + 966);
    *((_DWORD *)a3 + 170) = *((_DWORD *)this + 1930);
    *((_QWORD *)a3 + 88) = *((_QWORD *)this + 968);
    *((_DWORD *)a3 + 174) = *((_DWORD *)this + 1934);
    v8 = *((_QWORD *)a3 + 89) & 0xFFFFFFFFFFFFFFFCuLL | (((*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v6)
                                                                    + 576LL) & 2) != 0)
                                                       + 1LL);
    *((_QWORD *)a3 + 89) = v8;
    *((_QWORD *)a3 + 89) = *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v6) + 478LL) ^ (v8 ^ *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v6) + 478LL)) & 0xFFFFFFFFFFFFFFFBuLL;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, v4);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 265;
  }
  return result;
}
