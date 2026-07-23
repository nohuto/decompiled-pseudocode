/*
 * XREFs of PopCheckThermalPolicy @ 0x140A367D8
 * Callers:
 *     PopThermalWorker @ 0x140A36310 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 */

char __fastcall PopCheckThermalPolicy(__int64 a1, __int64 a2, char *a3, int *a4)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v9; // rsi
  const WCHAR *v10; // r8
  unsigned int *v11; // rdi
  unsigned int v12; // eax
  char v13; // al
  unsigned int v14; // eax
  bool v15; // al
  unsigned int v16; // ecx
  __int64 i; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // r10d
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // r9d
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  bool v29; // cf
  char result; // al
  __int64 v31; // rcx
  char v32; // al
  int v33; // eax

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x6D546F50u);
  v9 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag
    && (v31 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL)) != 0 )
  {
    v10 = *(const WCHAR **)(v31 + 136);
  }
  else
  {
    v10 = &word_140AEDAC0;
  }
  v11 = (unsigned int *)(a1 + 128);
  v12 = *(_DWORD *)(a1 + 140);
  *(_QWORD *)(a1 + 232) = 1000000LL * *(unsigned int *)(a1 + 200);
  if ( v12 && *v11 >= v12 )
  {
    PopPrintEx(
      0,
      (int)"Thermal Zone %S (%p): Above critical temperature (_TMP %d, _CRT %d). Shutdown initiated\n",
      v10,
      a1,
      *v11,
      v12);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  *(_BYTE *)(a1 + 210) = v13;
  v14 = *(_DWORD *)(a1 + 188);
  v15 = v14 && *v11 >= v14;
  *(_BYTE *)(a1 + 209) = v15;
  v16 = *(_DWORD *)(a1 + 136);
  if ( v16 )
  {
    v32 = *(_BYTE *)(a1 + 211);
    if ( *v11 < v16 )
    {
      if ( v32 )
        *(_BYTE *)(a1 + 211) = 0;
    }
    else if ( !v32 )
    {
      *(_BYTE *)(a1 + 211) = 1;
    }
  }
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 144); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a1 + 128) >= *(_DWORD *)(a1 + 4 * i + 148) )
      break;
  }
  v18 = *(unsigned int *)(a1 + 104);
  *(_DWORD *)(a1 + 220) = i;
  if ( a2 - *(_QWORD *)(a1 + 96) < v18 )
  {
    *a4 = 0;
    result = *(_BYTE *)(a1 + 65) & 1;
    goto LABEL_25;
  }
  v19 = *(_DWORD *)(a1 + 128);
  v20 = *(_DWORD *)(a1 + 132);
  if ( *(_DWORD *)(a1 + 80) == 100 )
  {
    if ( !v20 || (v21 = *(_DWORD *)(a1 + 132), v19 < v20) )
    {
      *a4 = 0;
      *(_DWORD *)(a1 + 212) = 0;
      result = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 132);
  }
  if ( (*(_BYTE *)(a1 + 65) & 1) != 0 )
  {
    v21 = *(_DWORD *)(a1 + 132);
  }
  else
  {
    v33 = 10000 * *(_DWORD *)(a1 + 124);
    *(_DWORD *)(a1 + 108) = v21;
    *(_DWORD *)(a1 + 104) = v33;
  }
  v22 = *(_DWORD *)(a1 + 76);
  v23 = v19 - *(_DWORD *)(a1 + 108);
  v24 = *(_DWORD *)(a1 + 120) * (v19 - v21) + *(_DWORD *)(a1 + 116) * v23;
  *a4 = v24;
  if ( !v23 || ((v23 ^ v24) & 0x80000000) == 0 )
    v22 -= v24;
  if ( v22 > 1000 )
    v22 = 1000;
  v25 = *(_DWORD *)(a1 + 192);
  v26 = 0;
  if ( v22 >= 0 )
    v26 = v22;
  v27 = 10 * v25;
  if ( v26 >= 10 * v25 )
    v27 = v26;
  *(_DWORD *)(a1 + 76) = v27;
  v28 = v27 + 5;
  v29 = (unsigned int)(v28 / 10) < *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 216) = v28 / 10;
  *(_BYTE *)(a1 + 224) = v29;
  result = 1;
  *(_DWORD *)(a1 + 108) = v19;
  *(_QWORD *)(a1 + 96) = a2;
  *(_DWORD *)(a1 + 212) = 1;
LABEL_25:
  *a3 = result;
  if ( v9 )
    return ObfDereferenceObjectWithTag(v9, 0x6D546F50u);
  return result;
}
