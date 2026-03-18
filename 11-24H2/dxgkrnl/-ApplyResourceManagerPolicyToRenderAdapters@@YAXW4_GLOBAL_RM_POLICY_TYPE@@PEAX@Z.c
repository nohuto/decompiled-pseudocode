/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403D5ED4
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1403D5890 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1403D5B80 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14006B4B0 (Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007328C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732C0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738A8 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(int a1, __int64 a2)
{
  struct DXGADAPTER **v4; // r14
  struct DXGADAPTER *v5; // rdi
  struct DXGADAPTER *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v10; // rax
  DXGADAPTERLISTLOCK *v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-28h] BYREF

  v11 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 672);
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGADAPTERLISTLOCK::AcquireShared(v11);
    v12 = 1;
  }
  else
  {
    DXGADAPTERLISTLOCK::AcquireExclusive(v11);
    v12 = 2;
  }
  v4 = (struct DXGADAPTER **)((char *)DXGGLOBAL::GetGlobal() + 800);
  v5 = *v4;
  while ( v5 != (struct DXGADAPTER *)v4 && v5 )
  {
    v6 = v5;
    v5 = *(struct DXGADAPTER **)v5;
    if ( *((_QWORD *)v6 + 391) && (*((_DWORD *)v6 + 111) & 0x4000) == 0 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14, v6, 1);
      if ( *((_DWORD *)v6 + 50) == 1 )
      {
        v7 = (_QWORD *)*((_QWORD *)v6 + 391);
        v8 = v7[96];
        if ( a1 )
        {
          if ( a1 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, DXGADAPTERLISTLOCK *, int))(*(_QWORD *)(v7[95] + 8LL)
                                                                                               + 1104LL))(
              v7[96],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v8,
              v11,
              v12);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, DXGADAPTERLISTLOCK *, int))(*(_QWORD *)(v7[92] + 8LL)
                                                                                             + 960LL))(
            v7[93],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v8,
            v11,
            v12);
        }
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGGLOBAL *)((char *)Global + 304808), 0);
  if ( (unsigned int)Feature_EnumAdaptersPerfImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)&v11);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  }
  v10 = DXGGLOBAL::GetGlobal();
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *((_DWORD *)v10 + 76215) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v10 + 76216) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v10 + 76214) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v10 + 76217) ^= (*(_DWORD *)(a2 + 8) ^ *((_DWORD *)v10 + 76217)) & 1;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
  DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)&v11);
}
