/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403D4554
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1403D3F10 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1403D4200 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(int a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD **v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // r9
  struct DXGGLOBAL *v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF
  char v12[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+40h] [rbp-18h]

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v5 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 768);
  v6 = *v5;
  while ( v6 != v5 && v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    if ( v7[391] && (*((_DWORD *)v7 + 111) & 0x4000) == 0 )
    {
      v13 = v7;
      v14 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      if ( *((_DWORD *)v7 + 50) == 1 )
      {
        v8 = (_QWORD *)v7[391];
        v9 = v8[96];
        if ( a1 )
        {
          if ( a1 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[95] + 8LL) + 1104LL))(
              v8[96],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v9);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[92] + 8LL) + 960LL))(
            v8[93],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v9);
        }
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    }
  }
  v10 = DXGGLOBAL::GetGlobal();
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *((_DWORD *)v10 + 76195) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v10 + 76196) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v10 + 76194) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v10 + 76197) ^= (*(_DWORD *)(a2 + 8) ^ *((_DWORD *)v10 + 76197)) & 1;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
}
