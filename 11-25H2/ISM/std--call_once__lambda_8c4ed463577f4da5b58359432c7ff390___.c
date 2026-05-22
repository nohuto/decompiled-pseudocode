/*
 * XREFs of std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___ @ 0x1801BC51C
 * Callers:
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801BC3D0 (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180081F8C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ?AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B585C (-AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  const char *v6; // r9
  MPCConstantManager *Instance; // rax
  union _RTL_RUN_ONCE *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]
  WINBOOL v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v11 = HIDWORD(a1);
  v10 = 0;
  if ( !__std_init_once_begin_initialize(&MPCEyeGazeProcessor::s_constantsInitialized, 0, &v10, 0LL) )
    abort();
  if ( v10 )
  {
    v8 = &MPCEyeGazeProcessor::s_constantsInitialized;
    v9 = 4LL;
    Instance = MPCConstantManager::GetInstance(v4, v3, v5, v6);
    MPCConstantManager::AddInputType(Instance, (struct IMPCInputProviderBase *)((*a2 + 24LL) & -(__int64)(*a2 != 0LL)));
    LODWORD(v9) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v8);
  }
}
