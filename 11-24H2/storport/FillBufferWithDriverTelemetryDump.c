/*
 * XREFs of FillBufferWithDriverTelemetryDump @ 0x1400BD408
 * Callers:
 *     RaidStandardSecondaryDumpCallback @ 0x1400BD710 (RaidStandardSecondaryDumpCallback.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall FillBufferWithDriverTelemetryDump(__int64 a1, char *a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebp
  _DWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r14d
  unsigned int v13; // r11d
  unsigned int v14; // r12d
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rcx
  unsigned int i; // edx
  __int64 v21; // rax
  __int64 result; // rax

  v3 = BootDriveExtension;
  if ( !a2 || (v6 = *a3) == 0 )
  {
    *a3 = 7776;
    return 3221225507LL;
  }
  if ( v6 >= 0xD8 )
  {
    v7 = 7776;
    if ( v6 < 0x1E60 )
      v7 = *a3;
    memset_0(a2, 0, v7);
    v8 = 96;
    *(_DWORD *)a2 = 1347703620;
    *((_DWORD *)a2 + 1) = 96;
    *((_DWORD *)a2 + 2) = v7;
    RtlStringCbCopyA(a2 + 16, 0x10uLL, "storport.sys");
    *((_DWORD *)a2 + 8) = 0;
    v9 = a2 + 36;
    v10 = *(_QWORD *)(v3 + 24);
    v11 = 0;
    v12 = *(_DWORD *)(v10 + 4932);
    v13 = *(_DWORD *)(v10 + 4928) % v12;
    v14 = (v13 + 1) % v12;
    if ( v13 == v14 )
    {
LABEL_27:
      *((_DWORD *)a2 + 8) = v11;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 4936LL) + 48LL * v13;
      v16 = (unsigned __int64)*(unsigned int *)(v15 + 32) >> 24;
      *((_BYTE *)v9 + 16) = HIBYTE(*(_DWORD *)(v15 + 32));
      if ( !(_BYTE)v16 || (unsigned __int8)v16 <= 0x22u && (v17 = 0x5001D0180LL, _bittest64(&v17, v16)) )
      {
        if ( *(_DWORD *)v15 == 1 )
        {
          if ( (unsigned __int64)v8 + 60 < v7 )
          {
            *(_BYTE *)v9 = BYTE2(*(_DWORD *)(v15 + 32));
            v9[14] = *(_DWORD *)(v15 + 24);
            v9[13] = (unsigned __int8)*(_DWORD *)(v15 + 32);
            v18 = (unsigned __int64)*(unsigned int *)(v15 + 32) >> 8;
            *((_QWORD *)v9 + 4) = 0LL;
            v9[12] = (unsigned __int8)v18;
            *((_QWORD *)v9 + 5) = *(_QWORD *)(v15 + 40);
            goto LABEL_22;
          }
        }
        else if ( !*(_DWORD *)v15 )
        {
          v19 = v9 - 15;
          for ( i = 0; i < v11; ++i )
          {
            if ( *(_DWORD *)(v15 + 24) == v19[14] )
            {
              *((_QWORD *)v19 + 4) = *(_QWORD *)(v15 + 40);
              goto LABEL_23;
            }
            v19 -= 15;
          }
          if ( (unsigned __int64)v8 + 60 < v7 )
          {
            *(_BYTE *)v9 = BYTE2(*(_DWORD *)(v15 + 32));
            *((_BYTE *)v9 + 16) = HIBYTE(*(_DWORD *)(v15 + 32));
            v9[14] = *(_DWORD *)(v15 + 24);
            v9[13] = (unsigned __int8)*(_DWORD *)(v15 + 32);
            v9[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v15 + 32));
            v21 = *(_QWORD *)(v15 + 40);
            *((_QWORD *)v9 + 5) = 0LL;
            *((_QWORD *)v9 + 4) = v21;
LABEL_22:
            v9 += 15;
            ++v11;
            v8 += 60;
            if ( v11 >= 0x80 )
              goto LABEL_27;
          }
        }
      }
LABEL_23:
      if ( v13 )
        v13 = (v13 - 1) % v12;
      else
        v13 = v12 - 1;
      if ( v13 == v14 )
        goto LABEL_27;
    }
  }
  *a3 = 216;
  return 3221225507LL;
}
