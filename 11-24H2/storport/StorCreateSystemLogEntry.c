/*
 * XREFs of StorCreateSystemLogEntry @ 0x14008F060
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400368AC (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x14006688C (RtlStringCchLengthW.c)
 *     RaidScsiErrorToIoError @ 0x14008DF3C (RaidScsiErrorToIoError.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorCreateSystemLogEntry(PVOID IoObject, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v7; // r12d
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  unsigned int v13; // r11d
  int v14; // r11d
  char *ErrorLogEntry; // rax
  char *v16; // rbx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebp
  wchar_t *i; // rsi
  const wchar_t *v22; // r14
  __int64 v23; // r11
  size_t pcchLength; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a2 + 40);
  pcchLength = 0LL;
  if ( v3 > 0xF0 )
    goto LABEL_22;
  v7 = *(_DWORD *)(a2 + 56);
  v8 = v3 + 32;
  v9 = 0;
  v10 = (v8 + 3) & 0xFFFFFFFC;
  v11 = v10 - v8;
  v12 = v10 + 40;
  v13 = v10 + 40;
  while ( v9 < v7 )
  {
    if ( RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a2 + 64) + 8LL * v9), 0xF0uLL, &pcchLength) < 0 )
      goto LABEL_22;
    v13 = v14 + 2 * pcchLength + 2;
    if ( v13 > 0xF0 )
      goto LABEL_22;
    ++v9;
  }
  if ( v13 > 0xF0 || v13 - 72 > 0x96 )
  {
LABEL_22:
    if ( a3 )
      *a3 = 150;
    return 3238002698LL;
  }
  else
  {
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(IoObject, v13);
    v16 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *(_OWORD *)ErrorLogEntry = 0LL;
      *((_OWORD *)ErrorLogEntry + 1) = 0LL;
      *((_QWORD *)ErrorLogEntry + 4) = 0LL;
      *ErrorLogEntry = 15;
      *((_WORD *)ErrorLogEntry + 1) = v10;
      *((_WORD *)ErrorLogEntry + 2) = *(_WORD *)(a2 + 56);
      *((_WORD *)ErrorLogEntry + 3) = *(_DWORD *)(a2 + 56) != 0 ? v12 : 0;
      v18 = *(_DWORD *)(a2 + 32);
      if ( *(_BYTE *)(a2 + 28) )
        v18 = RaidScsiErrorToIoError(v18);
      *((_DWORD *)v16 + 3) = v18;
      *((_DWORD *)v16 + 4) = *(_DWORD *)(a2 + 36);
      *((_WORD *)v16 + 20) = 1;
      *((_WORD *)v16 + 22) = 32;
      *((_WORD *)v16 + 23) = *(_WORD *)(a2 + 40);
      *((_DWORD *)v16 + 12) = *((_DWORD *)v16 + 3);
      *((_DWORD *)v16 + 13) = *(_DWORD *)(a2 + 36);
      *((_DWORD *)v16 + 14) = *(unsigned __int16 *)(a2 + 16);
      *((_DWORD *)v16 + 15) = *(unsigned __int16 *)(a2 + 20);
      *((_DWORD *)v16 + 16) = *(unsigned __int16 *)(a2 + 24);
      v16[68] = *(_BYTE *)(a2 + 12);
      *(_WORD *)(v16 + 69) = 0;
      v16[71] = 0;
      v19 = *(_DWORD *)(a2 + 40);
      if ( v19 )
      {
        memmove(v16 + 72, *(const void **)(a2 + 48), v19);
        if ( v11 )
          memset_0(&v16[*(unsigned int *)(a2 + 40) + 72], 45, v11);
      }
      v20 = 0;
      for ( i = (wchar_t *)&v16[v12]; v20 < *(_DWORD *)(a2 + 56); ++i )
      {
        v22 = *(const wchar_t **)(*(_QWORD *)(a2 + 64) + 8LL * v20);
        if ( RtlStringCchLengthW(v22, 0xF0uLL, &pcchLength) < 0 )
        {
          *i = 0;
        }
        else
        {
          RtlStringCchCopyW(i, pcchLength + 1, v22);
          i += v23;
        }
        ++v20;
      }
      IoWriteErrorLogEntry(v16);
      return 0LL;
    }
    else
    {
      return 3238002691LL;
    }
  }
}
