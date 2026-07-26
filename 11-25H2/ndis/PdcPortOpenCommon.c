/*
 * XREFs of PdcPortOpenCommon @ 0x1401595D4
 * Callers:
 *     PdcTaskClientRegister @ 0x140159324 (PdcTaskClientRegister.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 *     PdcAllocate @ 0x140159580 (PdcAllocate.c)
 *     PdcpPortReleaseResources @ 0x14015973C (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  void *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  NTSTATUS v15; // ebx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _QWORD v19[100]; // [rsp+30h] [rbp-338h] BYREF

  memset(v19, 0, sizeof(v19));
  v11 = 0LL;
  *a9 = 0LL;
  v13 = PdcAllocate(v12, 1768LL, 1348691024);
  v14 = (_QWORD *)v13;
  if ( !v13 )
    goto LABEL_2;
  *(_QWORD *)(v13 + 1744) = a3;
  *(_DWORD *)v13 = 1348691024;
  *(_DWORD *)(v13 + 16) = 95;
  *(_DWORD *)(v13 + 20) = 4;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v13 + 8));
  v14[219] = *a4;
  v19[1] = 0LL;
  v19[2] = 0LL;
  HIDWORD(v19[5]) = 6;
  v19[7] = 0x40000005FLL;
  v19[0] = 52429560LL;
  v18 = (_DWORD *)PdcAllocate(v17, 224LL, 1348691024);
  v11 = v18;
  if ( v18 )
  {
    *v18 = 1;
    *((_QWORD *)v18 + 2) = v14;
    *((_QWORD *)v18 + 1) = v19;
    v15 = ZwPowerInformation(PdcInvocation, v18, 0xE0u, 0LL, 0);
    if ( v15 >= 0 )
    {
      *a9 = v14;
      v15 = 0;
LABEL_6:
      ExFreePoolWithTag(v11, 0);
      return (unsigned int)v15;
    }
  }
  else
  {
LABEL_2:
    v15 = -1073741801;
  }
  if ( v14 )
    PdcpPortReleaseResources(v14);
  if ( v11 )
    goto LABEL_6;
  return (unsigned int)v15;
}
