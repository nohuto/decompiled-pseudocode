/*
 * XREFs of ACPIThermalReadTemperature @ 0x1400BCDC4
 * Callers:
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalUpdateTemperature @ 0x140038030 (ACPIThermalUpdateTemperature.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

__int64 __fastcall ACPIThermalReadTemperature(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r8d
  unsigned int v6; // edx
  _DWORD *v7; // rdi
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  __int64 i; // r10
  unsigned int v16; // eax
  unsigned int v17; // r9d
  IRP *v18; // rcx
  __int64 v19; // rcx
  struct _DEVICE_OBJECT *v20; // rdi
  __int64 v21; // rdx
  __int64 result; // rax
  int v23; // edx
  __int64 v24; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 200);
  v24 = 0LL;
  v4 = 0;
  v6 = -1;
  v7 = (_DWORD *)(v2 + 224);
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  if ( a2 )
    goto LABEL_41;
  v8 = *(_DWORD *)(v2 + 104);
  *v7 = -1;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v2 + 108);
    v4 = v8 < v9 ? v9 - v8 : 0;
    if ( ~v9 > v8 )
      v6 = v9 + v8;
  }
  v10 = *(_DWORD *)(v2 + 20);
  if ( v10 )
  {
    if ( v10 > *(_DWORD *)(v2 + 16) )
    {
      if ( v10 < v6 )
        v6 = v10 + 1;
    }
    else if ( v10 > v4 )
    {
      v4 = v10 - 1;
    }
  }
  v11 = *(_DWORD *)(v2 + 24);
  if ( v11 )
  {
    if ( v11 > *(_DWORD *)(v2 + 16) )
    {
      if ( v11 < v6 )
        v6 = v11 + 1;
    }
    else if ( v11 > v4 )
    {
      v4 = v11 - 1;
    }
  }
  v12 = *(_DWORD *)(v2 + 28);
  if ( v12 )
  {
    if ( v12 > *(_DWORD *)(v2 + 16) )
    {
      if ( v12 < v6 )
        v6 = v12 + 1;
    }
    else if ( v12 > v4 )
    {
      v4 = v12 - 1;
    }
  }
  v13 = *(_DWORD *)(v2 + 76);
  if ( v13 )
  {
    if ( v13 > *(_DWORD *)(v2 + 16) )
    {
      if ( v13 < v6 )
        v6 = v13 + 1;
    }
    else if ( v13 > v4 )
    {
      v4 = v13 - 1;
    }
  }
  if ( *(_BYTE *)(v2 + 32) )
  {
    v14 = (unsigned int *)(v2 + 36);
    for ( i = *(unsigned __int8 *)(v2 + 32); i; --i )
    {
      v16 = *v14;
      if ( *v14 )
      {
        v17 = *(_DWORD *)(v2 + 16);
        if ( v16 > v17 )
          goto LABEL_36;
        if ( v16 <= v4 )
        {
          if ( v16 > v17 )
          {
LABEL_36:
            if ( v16 < v6 )
              v6 = v16 + 1;
          }
        }
        else
        {
          v4 = v16 - 1;
        }
      }
      ++v14;
    }
  }
  if ( v4 || v6 != -1 )
  {
LABEL_41:
    v18 = *(IRP **)(v2 + 208);
    *(_DWORD *)(v2 + 232) = v6;
    *(_DWORD *)(v2 + 228) = v4;
    IoReuseIrp(v18, -1073741637);
    v19 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
    *(_BYTE *)(v19 - 72) = 14;
    *(_DWORD *)(v19 - 48) = 2703504;
    *(_DWORD *)(v19 - 56) = 12;
    *(_DWORD *)(v19 - 64) = 4;
    *(_QWORD *)(*(_QWORD *)(v2 + 208) + 24LL) = v7;
    v20 = *(struct _DEVICE_OBJECT **)(v2 + 216);
    if ( a2 )
    {
      result = IoSynchronousCallDriver(*(_QWORD *)(v2 + 216), *(_QWORD *)(v2 + 208));
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v2 + 272) = 1;
        return result;
      }
      v23 = *(_DWORD *)(v2 + 224);
      *(_BYTE *)(v2 + 272) = 0;
      ACPIThermalUpdateTemperature(a1, v23);
    }
    else
    {
      KeClearEvent((PRKEVENT)(v2 + 248));
      AcpiGetDriverProxyEndpoint(&v24, (__int64)ACPIThermalReadTemperatureComplete);
      v21 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
      *(_QWORD *)(v21 - 16) = v24;
      *(_QWORD *)(v21 - 8) = a1;
      *(_BYTE *)(v21 - 69) = -32;
      IofCallDriver(v20, *(PIRP *)(v2 + 208));
    }
  }
  return 0LL;
}
