/*
 * XREFs of RegisterHvCStates @ 0x140026EB8
 * Callers:
 *     RegisterHvIdleStates @ 0x140027590 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     DecodeAcpi2CState @ 0x1400256FC (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // rsi
  char *Pool2; // rdi
  int v4; // ebx
  unsigned __int8 v5; // r14
  unsigned int v6; // edx
  unsigned int i; // ebx
  char v8; // cl
  __int64 j; // r8
  char v10; // cl
  char *v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  char *v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 528);
  v18 = 0;
  v17 = 0LL;
  if ( v1 && *(_DWORD *)v1 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 520LL, 1919119952LL);
    if ( Pool2 )
    {
      v5 = 1;
      HIDWORD(v15) = *(_DWORD *)(a1 + 48);
      LODWORD(v15) = 82;
      v16 = Pool2;
      *(_DWORD *)Pool2 = 1;
      if ( *(_BYTE *)(v1 + 16) != 1 )
      {
        *(_QWORD *)(Pool2 + 20) = 0LL;
        *((_DWORD *)Pool2 + 4) = 1;
        *((_DWORD *)Pool2 + 8) = 0;
        LOBYTE(v17) = 127;
        BYTE12(v17) = 1;
        HIWORD(v17) = 0;
        v18 = 0;
        DecodeAcpi2CState(a1, (__int64)&v17, (__int64)(Pool2 + 8), 0LL, 0LL);
        ++*((_DWORD *)Pool2 + 1);
      }
      v6 = *(_DWORD *)v1;
      for ( i = 0; i < *(_DWORD *)v1; ++v5 )
      {
        if ( v5 > 3u || *((_DWORD *)Pool2 + 1) >= 0x10u )
          break;
        v8 = *(_BYTE *)(v1 + 20LL * i + 16);
        if ( (unsigned __int8)v8 > 3u )
          v8 = 3;
        if ( v8 == v5 )
        {
          for ( j = i + 1; (unsigned int)j < v6; j = (unsigned int)(j + 1) )
          {
            v10 = *(_BYTE *)(v1 + 20 * j + 16);
            if ( (unsigned __int8)v10 > 3u )
              v10 = 3;
            if ( v10 != v5 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
              break;
            ++i;
          }
          v11 = &Pool2[32 * *((unsigned int *)Pool2 + 1) + 8];
          *((_DWORD *)v11 + 2) = v5;
          v12 = v1 + 4 * (i + 4LL * i + 1);
          *((_DWORD *)v11 + 3) = *(unsigned __int16 *)(v12 + 14);
          *((_DWORD *)v11 + 4) = *(_DWORD *)(v12 + 16);
          if ( (int)DecodeAcpi2CState(a1, v12, (__int64)v11, 0LL, 0LL) < 0 )
            _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
          else
            ++*((_DWORD *)Pool2 + 1);
        }
        else
        {
          --i;
        }
        v6 = *(_DWORD *)v1;
        ++i;
      }
      if ( *((_DWORD *)Pool2 + 1) )
      {
        if ( qword_140015948 )
          v13 = qword_140015948(&v15);
        else
          v13 = -1073741822;
        v4 = 0;
        if ( v13 != -1073741637 )
          v4 = v13;
        if ( v4 >= 0 )
        {
          v4 = 0;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            3,
            13,
            (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
            v4,
            v15,
            v16);
        }
      }
      else
      {
        v4 = -1073741823;
      }
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v4;
}
