/*
 * XREFs of NvmeNamespacePoFxSetDeviceIdleTimeout @ 0x140133B88
 * Callers:
 *     NvmeNamespaceRegisterForIdleDetection @ 0x140134C3C (NvmeNamespaceRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeNamespacePoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2, char a3)
{
  __int64 *v3; // r9
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  v3 = (__int64 *)(a1 + 128);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
  v5 = *(_QWORD *)(v4 + 160);
  if ( (*(_DWORD *)(v5 + 176) & 0x20) != 0 )
  {
    v6 = *(_QWORD *)(*v3 + 8);
    result = *(_QWORD *)(v5 + 8);
    v8 = *(_DWORD *)(result + 132);
    if ( v8 != *(_DWORD *)(v6 + 28) || a3 )
    {
      *(_DWORD *)(v6 + 28) = v8;
      v9 = 10000LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 160) + 8LL) + 132LL);
      return PoFxSetDeviceIdleTimeout(**(_QWORD **)(*v3 + 8), v9);
    }
  }
  else
  {
    if ( a2 == -1 )
    {
      v10 = -1LL;
    }
    else
    {
      if ( a2 < *(_DWORD *)(*(_QWORD *)(*v3 + 8) + 24LL) )
        a2 = *(_DWORD *)(*(_QWORD *)(*v3 + 8) + 24LL);
      v10 = 10000LL * a2;
    }
    result = *v3;
    v11 = *(_QWORD *)(*v3 + 8);
    if ( a2 != *(_DWORD *)(v11 + 28) )
    {
      *(_DWORD *)(v11 + 28) = a2;
      v9 = v10;
      return PoFxSetDeviceIdleTimeout(**(_QWORD **)(*v3 + 8), v9);
    }
  }
  return result;
}
