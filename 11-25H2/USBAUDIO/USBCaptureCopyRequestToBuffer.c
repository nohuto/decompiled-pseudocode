/*
 * XREFs of USBCaptureCopyRequestToBuffer @ 0x14003A570
 * Callers:
 *     USBCaptureProcessPin @ 0x140003280 (USBCaptureProcessPin.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140005198 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     memmove @ 0x14001C740 (memmove.c)
 */

char __fastcall USBCaptureCopyRequestToBuffer(__int64 a1, struct _KSSTREAM_POINTER *a2, _BYTE *a3)
{
  ULONG Remaining; // r14d
  PKSPIN Pin; // rcx
  unsigned __int16 *v7; // r10
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r13
  bool v12; // sf
  unsigned __int16 *v13; // r13
  ULONG *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  ULONG v19; // ebx
  const void *v20; // r12
  ULONG v21; // esi
  char v22; // dl
  __int64 v24; // [rsp+20h] [rbp-78h]
  _QWORD *Context; // [rsp+A0h] [rbp+8h]

  Remaining = a2->OffsetOut.Remaining;
  Pin = a2->Pin;
  *a3 = 0;
  v7 = *(unsigned __int16 **)(a1 + 24);
  Context = Pin->Context;
  v8 = Context[19];
  v9 = *(unsigned int *)(v8 + 124);
  if ( *v7 < (unsigned __int64)(12 * v9 + 152) )
  {
    v22 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v14 = &WPP_RECORDER_INITIALIZED;
    if ( v22 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      LOBYTE(v14) = WPP_RECORDER_AND_TRACE_SF_qdd(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v22,
                      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      v24,
                      3u,
                      0x14u,
                      (__int64)&WPP_f8dfd6848d2138a27d5dceb541a753eb_Traceguids);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 32);
    v11 = v10 + 2 * v10 + 35;
    v12 = *(int *)&v7[2 * v11 + 4] < 0;
    v13 = &v7[2 * v11];
    LOBYTE(v14) = v12 || !*((_DWORD *)v13 + 1);
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      v15 = *(_DWORD *)(a1 + 32);
      v16 = *(_DWORD *)(v8 + 124);
      do
      {
        v17 = v15;
        v18 = v16;
        if ( !(_BYTE)v14 )
          break;
        v13 += 6;
        a2->StreamHeader->OptionsFlags |= 4u;
        v15 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v15;
        LOBYTE(v14) = *((int *)v13 + 2) < 0 || !*((_DWORD *)v13 + 1);
        v16 = *(_DWORD *)(v8 + 124);
        v17 = v15;
        v18 = v16;
      }
      while ( v15 < v16 );
      if ( v17 < v18 )
      {
        v19 = *((_DWORD *)v13 + 1);
        v20 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v13);
        if ( v19 )
        {
          while ( Remaining && *(_BYTE *)(v8 + 112) )
          {
            v21 = v19;
            if ( Remaining < v19 )
              v21 = Remaining;
            memmove(a2->OffsetOut.Data, v20, v21);
            v19 -= v21;
            Context[10] += v21;
            KsStreamPointerAdvanceOffsets(a2, 0, v21, 0);
            Remaining -= v21;
            if ( Remaining )
            {
              while ( 1 )
              {
                LODWORD(v14) = ++*(_DWORD *)(a1 + 32);
                if ( (unsigned int)v14 >= *(_DWORD *)(v8 + 124) )
                  break;
                v13 += 6;
                if ( *((int *)v13 + 2) >= 0 )
                {
                  v20 = (const void *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)v13);
                  v19 = *((_DWORD *)v13 + 1);
                  break;
                }
                a2->StreamHeader->OptionsFlags |= 4u;
              }
              if ( !v19 )
                return (char)v14;
            }
            else
            {
              LOBYTE(v14) = (_BYTE)a3;
              *a3 = 1;
              if ( !v19 )
              {
                ++*(_DWORD *)(a1 + 32);
                return (char)v14;
              }
              LODWORD(v14) = *((_DWORD *)v13 + 1) - v19;
              *((_DWORD *)v13 + 1) = v19;
              *(_DWORD *)v13 += (_DWORD)v14;
            }
          }
        }
      }
    }
  }
  return (char)v14;
}
