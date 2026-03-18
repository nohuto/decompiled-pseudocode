/*
 * XREFs of SecureDmaEnabler_MapMemory @ 0x1400826D8
 * Callers:
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x140083898 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall SecureDmaEnabler_MapMemory(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  bool v4; // zf
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // [rsp+30h] [rbp-49h] BYREF
  __int128 v17; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h]
  GUID v19; // [rsp+58h] [rbp-21h] BYREF
  __int128 v20; // [rsp+68h] [rbp-11h]
  __int128 v21; // [rsp+78h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+Fh]

  v16 = 0LL;
  v4 = *a2 == 0LL;
  v22 = 0LL;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  if ( v4 )
  {
    v12 = VslCreateSecureSection(&v16, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1024LL), a2, 4LL, 1);
    v8 = v12;
    if ( v12 >= 0 )
    {
      *((_QWORD *)&v20 + 1) = *(_QWORD *)(a1 + 16);
      *((_QWORD *)&v21 + 1) = v16;
      v14 = *(_QWORD *)(a1 + 8);
      LODWORD(v21) = 5;
      LODWORD(v22) = a3;
      v8 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v14 + 112), &v19, 56, (__int64)&v17, 24);
      if ( v8 >= 0 )
      {
        if ( (int)v17 >= 0 )
        {
          *(_DWORD *)(a4 + 12) = 0;
          *(_QWORD *)a4 = *((_QWORD *)&v17 + 1);
          *(_QWORD *)(a4 + 16) = v18;
          *(_QWORD *)(a4 + 24) = v16;
          *(_DWORD *)(a4 + 8) = a3;
          return (unsigned int)v8;
        }
        v8 = v17;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v15,
            18,
            14,
            (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
            v17);
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v13,
        18,
        13,
        (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
        v12);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)a2,
        18,
        12,
        (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids);
    }
    v8 = -1073741637;
  }
  if ( v16 )
  {
    v9 = VslDeleteSecureSection(v16);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v10,
        18,
        15,
        (__int64)&WPP_8d19556b374b3e85e4187adf480561f2_Traceguids,
        v9);
    }
  }
  return (unsigned int)v8;
}
