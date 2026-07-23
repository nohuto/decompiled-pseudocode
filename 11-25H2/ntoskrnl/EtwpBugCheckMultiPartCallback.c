/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x140643FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestSpinLock @ 0x14041D2F0 (KeTestSpinLock.c)
 *     EtwpGetFirstBuffer @ 0x1404EBFE4 (EtwpGetFirstBuffer.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int128 *v4; // rbx
  LARGE_INTEGER *v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // rcx
  __int64 FirstBuffer; // rax
  bool v13; // zf
  __int64 v14; // r9
  _DWORD *v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  int v18; // edx

  v4 = *(__int128 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v7 = (__int64 *)v4 + 1;
    v8 = *((_QWORD *)v4 + 1);
    if ( v8 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * *(unsigned __int16 *)v4);
      v15 = *(_DWORD **)(v8 + 16);
      if ( v15[2] <= *v15 )
        v16 = v15[2];
      else
        v16 = v15[1];
      v15[12] = v16;
      *(_DWORD *)ReasonSpecificData[2].Data4 = v16;
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v15;
      v17 = *(_QWORD **)*v7;
      if ( v17 == (_QWORD *)(v14 + 80) )
        v17 = 0LL;
      *v7 = (__int64)v17;
      v13 = v17 == 0LL;
LABEL_26:
      if ( v13 )
        ++*(_WORD *)v4;
    }
    else
    {
      while ( (unsigned int)*(unsigned __int16 *)v4 < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * *(unsigned __int16 *)v4);
        if ( (v9 & 1) == 0
          && *(int *)(v9 + 12) < 0
          && (*(_DWORD *)(v9 + 300) & 1) == 0
          && KeTestSpinLock((PKSPIN_LOCK)(v9 + 696)) )
        {
          v10 = *(unsigned __int16 *)(v9 + 136) + 48;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v10;
          if ( !*(_DWORD *)ReasonSpecificData->Data4 )
            goto LABEL_17;
          if ( v10 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
          {
            v11 = *(_QWORD *)&ReasonSpecificData->Data1;
            *(_DWORD *)v11 = 32223201;
            *(_DWORD *)(v11 + 4) = *(_DWORD *)v9;
            *(_DWORD *)(v11 + 16) = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v11 + 12) = *(_DWORD *)(v9 + 200);
            *(_QWORD *)(v11 + 24) = *(_QWORD *)(v9 + 792);
            *(_DWORD *)(v11 + 8) = *(_DWORD *)(v9 + 12);
            *(_DWORD *)(v11 + 20) = *(unsigned __int16 *)(v9 + 136);
            *(_OWORD *)(v11 + 32) = *(_OWORD *)(v9 + 304);
            memmove((void *)(v11 + 48), *(const void **)(v9 + 144), *(unsigned __int16 *)(v9 + 136));
            *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v10;
            *(_DWORD *)ReasonSpecificData->Data4 = v10;
LABEL_17:
            FirstBuffer = EtwpGetFirstBuffer(v9);
            *v7 = FirstBuffer;
            v13 = FirstBuffer == 0;
            goto LABEL_26;
          }
        }
        ++*(_WORD *)v4;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = NtBuildNumber;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    v7 = (__int64 *)v4 + 1;
  }
  v18 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 & 0xFFFFFFFE;
    *v7 = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 | 1;
  }
}
