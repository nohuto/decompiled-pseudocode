/*
 * XREFs of PdcPortOpenCommon @ 0x14078DE74
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
 *     PdcTaskClientRegister @ 0x14078DDCC (PdcTaskClientRegister.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PdcpPortReleaseResources @ 0x14078E000 (PdcpPortReleaseResources.c)
 *     PdcAllocate @ 0x140A71990 (PdcAllocate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        NTSTRSAFE_PCWSTR pszSrc,
        int a8,
        _QWORD *a9)
{
  void *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  NTSTATUS v18; // ebx
  unsigned int v20; // r11d
  __int64 v21; // rax
  _DWORD *v22; // rax
  _DWORD v23[2]; // [rsp+30h] [rbp-338h] BYREF
  __int64 v24; // [rsp+38h] [rbp-330h]
  __int64 v25; // [rsp+40h] [rbp-328h]
  int v26; // [rsp+5Ch] [rbp-30Ch]
  int v27; // [rsp+68h] [rbp-300h]
  int v28; // [rsp+6Ch] [rbp-2FCh]
  wchar_t pszDest[364]; // [rsp+78h] [rbp-2F0h] BYREF

  memset_0(v23, 0, 0x320uLL);
  v13 = 0LL;
  LOBYTE(v14) = 1;
  *a9 = 0LL;
  v15 = PdcAllocate(v14, 1768LL, 1348691024LL);
  v17 = (_QWORD *)v15;
  if ( !v15 )
  {
LABEL_2:
    v18 = -1073741801;
    goto LABEL_3;
  }
  *(_QWORD *)(v15 + 8) = 0LL;
  v20 = 1348691024;
  *(_DWORD *)v15 = 1348691024;
  *(_QWORD *)(v15 + 1744) = a3;
  *(_DWORD *)(v15 + 16) = a1;
  *(_DWORD *)(v15 + 20) = a2;
  v21 = *a4;
  v17[219] = *a4;
  if ( !v21 && (((a2 - 4) & 0xFFFFFFFA) != 0 || a2 == 9) )
  {
    v18 = -1073741583;
  }
  else
  {
    v26 = 6;
    v27 = a1;
    v28 = a2;
    if ( pszSrc )
      RtlStringCchCopyW(pszDest, 0x40uLL, pszSrc);
    v23[1] = 0;
    v24 = 0LL;
    v25 = 0LL;
    LOBYTE(v16) = 1;
    v23[0] = 52429560;
    v22 = (_DWORD *)PdcAllocate(v16, 224LL, v20);
    v13 = v22;
    if ( !v22 )
      goto LABEL_2;
    *v22 = 1;
    *((_QWORD *)v22 + 2) = v17;
    *((_QWORD *)v22 + 1) = v23;
    v18 = ZwPowerInformation(PdcInvocation, v22, 0xE0u, 0LL, 0);
    if ( v18 >= 0 )
    {
      *a9 = v17;
      v18 = 0;
LABEL_6:
      ExFreePoolWithTag(v13, 0);
      return (unsigned int)v18;
    }
  }
LABEL_3:
  if ( v17 )
    PdcpPortReleaseResources(v17);
  if ( v13 )
    goto LABEL_6;
  return (unsigned int)v18;
}
