/*
 * XREFs of ndisEtwRegisterGuids @ 0x1400A2FFC
 * Callers:
 *     ndisDriverSystemDispatch @ 0x1400A2E28 (ndisDriverSystemDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisEtwRegisterGuids(char *a1, int a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  int Length; // r14d
  unsigned int v7; // edi
  __int64 result; // rax
  GUID v9; // xmm0
  int v10; // edx
  char *v11; // rcx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      10,
      (struct _GUID *)&WPP_ce2236d9402e332d9fc244d3ef4316e6_Traceguids);
  }
  if ( !a3 || !a1 || v4 < 4 )
    return 3221225485LL;
  Length = ndisRegistryPath.Length;
  v7 = ndisRegistryPath.Length + 90;
  if ( v7 <= v4 )
  {
    memset(a1, 0, v7);
    *(_DWORD *)a1 = v7;
    *((_DWORD *)a1 + 3) = Length + 58;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 2) = 56;
    v9 = ndisControlGuid;
    *((_DWORD *)a1 + 10) |= 0x81000u;
    *((_DWORD *)a1 + 11) = 0;
    *((_QWORD *)a1 + 6) = 0LL;
    *(GUID *)(a1 + 24) = v9;
    *((_WORD *)a1 + 28) = ndisRegistryPath.Length;
    memmove(a1 + 58, ndisRegistryPath.Buffer, ndisRegistryPath.Length);
    v11 = &a1[*((unsigned int *)a1 + 3)];
    *a3 = v7;
    *(_WORD *)v11 = 30;
    *(_OWORD *)(v11 + 2) = *(_OWORD *)L"MofResourceName";
    *(_QWORD *)(v11 + 18) = *(_QWORD *)L"rceName";
    *(_DWORD *)(v11 + 26) = *(_DWORD *)L"ame";
    *((_WORD *)v11 + 15) = aMofresourcenam[14];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        1,
        11,
        (struct _GUID *)&WPP_ce2236d9402e332d9fc244d3ef4316e6_Traceguids,
        0);
    }
    return 0LL;
  }
  else
  {
    *(_DWORD *)a1 = v7;
    result = 3221225507LL;
    *a3 = 4;
  }
  return result;
}
