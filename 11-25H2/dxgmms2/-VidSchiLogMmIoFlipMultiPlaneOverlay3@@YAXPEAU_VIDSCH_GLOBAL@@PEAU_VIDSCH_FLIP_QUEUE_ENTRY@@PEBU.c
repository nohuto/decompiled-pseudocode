/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x140015C20
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x140014B1C (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x140038588 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer @ 0x14003880C (McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer.c)
 *     McTemplateK0pqqXR2qqddddddddtqtdqiiqQR2qq_EtwWriteTransfer @ 0x14003E9D0 (McTemplateK0pqqXR2qqddddddddtqtdqiiqQR2qq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        _DWORD *a2,
        LARGE_INTEGER *a3,
        char a4,
        char a5,
        char a6)
{
  char v6; // r15
  LARGE_INTEGER v10; // rax
  int *QuadPart; // rax
  int v12; // edi
  char v13; // si
  unsigned int HighPart; // eax
  LONGLONG v15; // r9
  _DWORD *v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // r10
  __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v21; // r10
  unsigned __int64 v22; // r8
  unsigned int i; // esi
  __int64 v24; // rcx
  int *v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // r12
  unsigned int v28; // r15d
  __int64 v29; // r9
  unsigned int j; // edi
  unsigned int v31; // r9d
  unsigned int v32; // edx
  unsigned int v33; // r10d
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r9
  int v39; // [rsp+F8h] [rbp-78h]
  __int128 v40; // [rsp+100h] [rbp-70h]
  __int128 v41; // [rsp+110h] [rbp-60h]
  _OWORD v42[2]; // [rsp+128h] [rbp-48h] BYREF
  __int64 v43; // [rsp+148h] [rbp-28h]
  _DWORD v44[20]; // [rsp+150h] [rbp-20h] BYREF
  _BYTE v45[64]; // [rsp+1A0h] [rbp+30h] BYREF
  _BYTE v46[64]; // [rsp+1E0h] [rbp+70h] BYREF
  _BYTE v47[64]; // [rsp+220h] [rbp+B0h] BYREF
  char v48[64]; // [rsp+260h] [rbp+F0h] BYREF

  v6 = a4;
  if ( bTracingEnabled )
  {
    v10 = a3[4];
    v41 = 0LL;
    v40 = 0LL;
    if ( v10.QuadPart )
    {
      v41 = *(_OWORD *)(v10.QuadPart + 4);
      v40 = *(_OWORD *)(v10.QuadPart + 20);
    }
    QuadPart = (int *)a3[6].QuadPart;
    LOBYTE(v12) = 0;
    if ( QuadPart )
      v12 = *QuadPart;
    v13 = a3[6].QuadPart != 0;
    memset(v44, 0, sizeof(v44));
    v43 = 0LL;
    HighPart = a3[2].HighPart;
    memset(v42, 0, sizeof(v42));
    if ( HighPart )
    {
      v15 = a3[3].QuadPart - (_QWORD)v44;
      v16 = v42;
      v17 = v44;
      v18 = HighPart;
      do
      {
        v19 = *(_QWORD *)((char *)v17 + v15);
        *v17++ = *(_QWORD *)(v19 + 8);
        *v16++ = *(_DWORD *)v19;
        --v18;
      }
      while ( v18 );
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v21 = a3[7];
    v22 = (v21.QuadPart - PerformanceCounter.QuadPart) & -(__int64)(PerformanceCounter.QuadPart < (unsigned __int64)v21.QuadPart);
    if ( (byte_140081241 & 1) != 0 )
    {
      v35 = *(_QWORD *)(a1 + 2872);
      if ( is_mul_ok(v22, 0x3E8uLL) )
      {
        v36 = v22 * (unsigned __int128)0x3E8uLL % v35;
        v37 = v22 * (unsigned __int128)0x3E8uLL / v35;
      }
      else
      {
        v36 = v22 % v35;
        LOBYTE(v37) = -24 * (v22 / v35) + 1000 * (v22 % v35) / v35;
      }
      McTemplateK0pqqXR2qqddddddddtqtdqiiqQR2qq_EtwWriteTransfer(
        (a2[288] >> 12) & 1,
        v36,
        v22,
        *(_QWORD *)(a1 + 16),
        a3[1].LowPart,
        a3[2].HighPart,
        (__int64)v44,
        a3[1].HighPart,
        a3[2].LowPart,
        v41,
        SBYTE8(v41),
        SBYTE4(v41),
        SBYTE12(v41),
        v40,
        SBYTE8(v40),
        SBYTE4(v40),
        SBYTE12(v40),
        v13,
        v12,
        (a2[288] & 0x1000) != 0,
        a5,
        a3[5].LowPart,
        a6,
        v21.QuadPart,
        v37,
        (__int64)v42,
        a2[262],
        a2[264]);
      v6 = a4;
    }
    for ( i = 0; i < a3[2].HighPart; ++i )
    {
      LODWORD(v24) = i;
      v25 = *(int **)(a3[3].QuadPart + 8LL * i);
      LODWORD(v26) = *v25;
      v39 = *v25;
      if ( (v25[4] & 1) != 0 )
      {
        if ( v25[7] )
        {
          v27 = *((_QWORD *)v25 + 17);
          v28 = v25[32];
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            v29 = **((_QWORD **)v25 + 4);
            McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
              *(unsigned __int16 *)(v29 + 16),
              (_DWORD)v25,
              v26,
              *(_QWORD *)(a1 + 16),
              a3[1].LowPart,
              v26,
              v39,
              *(_QWORD *)(v29 + 8),
              *(_QWORD *)(v29 + 24),
              *(_WORD *)(v29 + 16),
              a2[264],
              a2[270],
              v25[15],
              v25[17],
              v25[16],
              v25[18],
              v25[19],
              v25[21],
              v25[20],
              v25[22],
              v25[23],
              v25[25],
              v25[24],
              v25[26],
              v25[29],
              a4,
              1,
              v25[31],
              v25[32]);
          }
          for ( j = 0; j < v28; j += 16 )
          {
            v31 = 0;
            v32 = v28 - j;
            if ( v28 - j > 0x10 )
            {
              v33 = 16;
            }
            else
            {
              v33 = v28 - j;
              if ( !v32 )
                goto LABEL_22;
            }
            v26 = 0LL;
            do
            {
              v34 = v31 + j;
              ++v31;
              v24 = 2 * v34;
              v26 += 4LL;
              *(_DWORD *)&v47[v26 + 60] = *(_DWORD *)(v27 + 8 * v24);
              *(_DWORD *)&v46[v26 + 60] = *(_DWORD *)(v27 + 8 * v24 + 8);
              *(_DWORD *)&v45[v26 + 60] = *(_DWORD *)(v27 + 8 * v24 + 4);
              v44[v26 / 4 + 19] = *(_DWORD *)(v27 + 8 * v24 + 12);
            }
            while ( v31 < v33 );
LABEL_22:
            if ( (byte_140081241 & 1) != 0 )
              McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer(
                v24,
                v32,
                v26,
                v32 <= 0x10,
                v33,
                (__int64)v48,
                (__int64)v47,
                (__int64)v46,
                (__int64)v45);
          }
        }
      }
      else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
          i,
          (_DWORD)v25,
          v26,
          *(_QWORD *)(a1 + 16),
          a3[1].LowPart,
          v26,
          v39,
          0,
          0,
          0,
          a2[264],
          a2[270],
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v6,
          0,
          0,
          0);
      }
      v6 = a4;
    }
  }
}
