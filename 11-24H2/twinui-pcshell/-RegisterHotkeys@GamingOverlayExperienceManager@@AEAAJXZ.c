/*
 * XREFs of ?RegisterHotkeys@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E3B30
 * Callers:
 *     ?UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1801E3A0C (-UpdateHotkeyRegistrationsTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x18023DC68 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::RegisterHotkeys(RTL_SRWLOCK *this)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // r15d
  int *v8; // rbx
  const unsigned __int16 **v9; // r14
  unsigned int v10; // ecx
  char v11; // dl
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v17[28]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() == 1 )
    return 0LL;
  v16 = 0LL;
  wil::AcquireSRWLockExclusive(&v16, this + 123);
  if ( LODWORD(this[124].Ptr) )
  {
    v3 = -2147418113;
  }
  else
  {
    memset_0(v17, 0, sizeof(v17));
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    do
    {
      v17[v6] = *(_OWORD *)((char *)&unk_180798F80 + v6 * 16);
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v5 < 0xA );
    v7 = 0;
    v8 = (int *)&v17[v4] + 2;
    v9 = (const unsigned __int16 **)&off_18075CE00;
    do
    {
      v15 = 0;
      v14 = 0;
      if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", *(v9 - 1), &v15) >= 0
        && SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR", *v9, &v14) >= 0 )
      {
        v10 = v15;
        if ( v15 )
        {
          v11 = v14;
          if ( v14 )
          {
            if ( (v14 & 8) == 0 )
            {
              *(v8 - 2) = 0;
              *(v8 - 1) = *((_DWORD *)v9 - 4);
              v8[1] = v10;
              v12 = *v8 | 0x4800;
              *v8 = v12;
              if ( (v11 & 1) != 0 )
              {
                v12 |= 2u;
                *v8 = v12;
              }
              if ( (v11 & 2) != 0 )
              {
                v12 |= 1u;
                *v8 = v12;
              }
              if ( (v11 & 4) != 0 )
                *v8 = v12 | 4;
              ++v4;
              v8 += 4;
            }
          }
        }
      }
      ++v7;
      v9 += 3;
    }
    while ( v7 < 0x12 );
    v13 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _OWORD *, unsigned __int64, RTL_SRWLOCK *))(*(_QWORD *)this[55].Ptr
                                                                                              + 24LL))(
            this[55].Ptr,
            v4,
            v17,
            (unsigned __int64)&this[21] & -(__int64)(this != 0LL),
            this + 124);
    v3 = v13;
    if ( v13 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12AC,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v13);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
  return v3;
}
