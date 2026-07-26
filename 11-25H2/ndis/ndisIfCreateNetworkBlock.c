/*
 * XREFs of ndisIfCreateNetworkBlock @ 0x1400D45DC
 * Callers:
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D497C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400D55E0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ndisCompareGuid @ 0x140049A00 (ndisCompareGuid.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x140099D10 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     ndisIfGetUniqueSiteId @ 0x1400D48D0 (ndisIfGetUniqueSiteId.c)
 */

__int64 __fastcall ndisIfCreateNetworkBlock(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  unsigned int v6; // ebx
  __int128 *v8; // r12
  const wchar_t *v10; // rcx
  __int64 v11; // r14
  __int64 Pool2; // rax
  _QWORD *v13; // rdi
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 *v25; // r14
  int v26; // eax
  unsigned int v27; // eax
  int UniqueSiteId; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 **v31; // rcx
  __int64 *v32; // rax

  v4 = 0LL;
  v6 = 0;
  v8 = (__int128 *)a2;
  v10 = (const wchar_t *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids;
  v11 = 4LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      a2);
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 && v8 && ndisIsValidIfStringParts(v10, *(unsigned __int16 *)(a3 + 12)) )
  {
    Pool2 = ExAllocatePool2(64LL, 616LL, 1718174798);
    v13 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v14 = *v8;
      *(_QWORD *)(Pool2 + 48) = a1;
      v15 = 128LL;
      *(_OWORD *)(Pool2 + 32) = v14;
      v16 = (_QWORD *)(Pool2 + 56);
      v16[1] = v16;
      *v16 = v16;
      v17 = v13 + 10;
      *((_DWORD *)v13 + 19) = 1;
      do
      {
        v18 = *(_OWORD *)(a3 + 16);
        *v17 = *(_OWORD *)a3;
        v19 = *(_OWORD *)(a3 + 32);
        v17[1] = v18;
        v20 = *(_OWORD *)(a3 + 48);
        v17[2] = v19;
        v21 = *(_OWORD *)(a3 + 64);
        v17[3] = v20;
        v22 = *(_OWORD *)(a3 + 80);
        v17[4] = v21;
        v23 = *(_OWORD *)(a3 + 96);
        v17[5] = v22;
        v24 = *(_OWORD *)(a3 + 112);
        a3 += 128LL;
        v17[6] = v23;
        v17 += 8;
        *(v17 - 1) = v24;
        --v11;
      }
      while ( v11 );
      v25 = (__int64 *)qword_140126B50;
      *v17 = *(_OWORD *)a3;
      while ( v25 != &qword_140126B50 )
      {
        v26 = ndisCompareGuid((__int64)v8, (__int64)(v25 + 4));
        if ( !v26 )
        {
          v6 = -1073741270;
LABEL_22:
          ExFreePoolWithTag(v13, 0);
          goto LABEL_26;
        }
        if ( v26 < 0 )
          break;
        v25 = (__int64 *)*v25;
      }
      v27 = *((_DWORD *)v13 + 22);
      if ( v27 )
      {
        if ( v27 >= 0x7FFFFFF )
        {
          v6 = -1073741811;
          goto LABEL_22;
        }
      }
      else
      {
        UniqueSiteId = ndisIfGetUniqueSiteId(v15);
        *((_DWORD *)v13 + 22) = UniqueSiteId;
        if ( UniqueSiteId == 0xFFFFFFF )
        {
          v6 = -1073741670;
          goto LABEL_22;
        }
      }
      v29 = v25[1];
      ++dword_1401275D4;
      v30 = *(_QWORD *)v29;
      if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29
        || (*v13 = v30,
            v13[1] = v29,
            *(_QWORD *)(v30 + 8) = v13,
            v31 = (__int64 **)(a1 + 24),
            *(_QWORD *)v29 = v13,
            v32 = v13 + 2,
            a2 = *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a2 + 8) != a1 + 24) )
      {
        __fastfail(3u);
      }
      *v32 = a2;
      v13[3] = v31;
      *(_QWORD *)(a2 + 8) = v32;
      *v31 = v32;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
      v4 = v13;
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_26:
  *a4 = v4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      (char)v8,
      (char)v4,
      v6);
  return v6;
}
