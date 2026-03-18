/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1403887C4
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x140046860 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     McTemplateK0ppqqt_EtwWriteTransfer @ 0x140067B40 (McTemplateK0ppqqt_EtwWriteTransfer.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x140388ADC (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3)
{
  const struct DXGALLOCATION *v3; // rdi
  unsigned int i; // r14d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 PreviousConfigIndex; // r15
  char v10; // r12
  __int64 v11; // r13
  int *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 j; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  _BYTE v23[16]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (ADAPTER_DISPLAY *)((char *)this + 624), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    v6 = *((_QWORD *)this + 16);
    v7 = 0;
    v8 = 4024LL * i;
    if ( *(_DWORD *)(v8 + v6 + 3784) )
    {
      do
      {
        LODWORD(PreviousConfigIndex) = 0;
        v10 = 1;
        v11 = v8 + 168LL * v7;
        v12 = (int *)(v6 + v11 + 1168);
        v13 = *v12;
        if ( (_DWORD)v13 != -1 )
        {
          LODWORD(PreviousConfigIndex) = *v12;
          v14 = (__int64)&v12[20 * v13 + 2];
          goto LABEL_5;
        }
LABEL_26:
        v14 = 0LL;
LABEL_5:
        while ( v14 )
        {
          if ( *(const struct DXGALLOCATION **)v14 == a2 )
          {
            *(_QWORD *)v14 = 0LL;
            if ( v10 )
            {
              WdLogSingleEntry3(3LL, a2, i, v7);
              WdLogGlobalForLineNumber = 10569;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              {
                LODWORD(v22) = *(unsigned __int8 *)(*((_QWORD *)this + 16) + v8 + 761);
                LODWORD(v21) = v7;
                LODWORD(v20) = i;
                McTemplateK0ppqqt_EtwWriteTransfer(
                  *(unsigned __int8 *)(*((_QWORD *)this + 16) + v8 + 761),
                  v18,
                  v19,
                  *((_QWORD *)this + 2),
                  a2,
                  v20,
                  v21,
                  v22);
              }
            }
            *(_DWORD *)(v14 + 8) &= ~1u;
            break;
          }
          v10 = 0;
          v15 = v11 + *((_QWORD *)this + 16);
          if ( *(_DWORD *)(v15 + 1168) == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9655;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
              9655LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(v15 + 1172) == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9656;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
              9656LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (_DWORD)PreviousConfigIndex == *(_DWORD *)(v15 + 1172) )
            goto LABEL_26;
          PreviousConfigIndex = (int)GetPreviousConfigIndex(PreviousConfigIndex);
          v14 = 80 * PreviousConfigIndex + v15 + 1176;
        }
        v6 = *((_QWORD *)this + 16);
        ++v7;
      }
      while ( v7 < *(_DWORD *)(v6 + v8 + 3784) );
      v3 = a2;
    }
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v6 + v8 + 3788); j = (unsigned int)(j + 1) )
    {
      if ( *(_BYTE *)(j + v6 + v8 + 2928) )
      {
        v17 = v8 + 80 * j;
        if ( (*(_DWORD *)(v17 + v6 + 2952) & 1) != 0 && *(const struct DXGALLOCATION **)(v17 + v6 + 2944) == v3 )
        {
          *(_QWORD *)(v17 + v6 + 2944) = 0LL;
          *(_BYTE *)((unsigned int)j + *((_QWORD *)this + 16) + v8 + 2928) = 0;
          *(_DWORD *)(*((_QWORD *)this + 16) + v17 + 2952) &= ~1u;
        }
      }
      v6 = *((_QWORD *)this + 16);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
}
