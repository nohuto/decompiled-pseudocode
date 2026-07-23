/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140AEBCE0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpGetNextGuidEntry @ 0x140839C10 (EtwpGetNextGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140945104 (EtwpReleaseLoggerContext.c)
 *     PcwAddInstance @ 0x1409F7360 (PcwAddInstance.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2)
{
  __int64 result; // rax
  struct _PCW_BUFFER *v3; // r13
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v5; // r8
  _DWORD *i; // rdx
  _QWORD *NextGuidEntry; // rax
  NTSTATUS v8; // esi
  __int64 j; // r14
  __int64 v10; // rbx
  unsigned int v11; // esi
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _PCW_DATA Data; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v18; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+80h] [rbp+1Fh]

  *(_QWORD *)&Name.Length = 3014700LL;
  Name.Buffer = L"EventTracingCounterSet";
  result = 0LL;
  v19 = 0LL;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v3 = *(struct _PCW_BUFFER **)(a2 + 24);
    Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
    if ( v5 == 1 )
    {
      *(_QWORD *)&v17[12] = 0LL;
      *(_DWORD *)&v17[20] = 0;
      for ( i = 0LL; ; i = NextGuidEntry )
      {
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)Flink, i, 0);
        if ( !NextGuidEntry )
          break;
        if ( *((_DWORD *)NextGuidEntry + 24) )
        {
          if ( (_QWORD *)NextGuidEntry[7] == NextGuidEntry + 7 )
            ++*(_DWORD *)&v17[20];
          else
            ++*(_DWORD *)&v17[12];
        }
        else
        {
          ++*(_DWORD *)&v17[16];
        }
      }
      *(_DWORD *)v17 = HIDWORD(Flink[275].Flink);
      *(_QWORD *)&v17[4] = *(struct _LIST_ENTRY **)((char *)&Flink[274].Blink + 4);
      Data.Data = v17;
      Data.Size = 24;
      return (unsigned int)PcwAddInstance(v3, &Name, 0, 1u, &Data);
    }
    else
    {
      v8 = 0;
      for ( j = 0LL; (unsigned int)j < LODWORD(Flink[1].Flink); j = (unsigned int)(j + 1) )
      {
        v10 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, j, 0);
        if ( v10 )
        {
          v18 = 0LL;
          v19 = 0LL;
          if ( *(_DWORD *)(v10 + 300) == 1 )
            LODWORD(v18) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 232);
          else
            DWORD1(v18) = *(_DWORD *)(v10 + 4) * *(_DWORD *)(v10 + 232);
          v11 = 0;
          v12 = KeNumberProcessors_0;
          LODWORD(v19) = *(_DWORD *)(v10 + 240);
          HIDWORD(v19) = *(_DWORD *)(v10 + 344);
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            do
            {
              v13 = *(_QWORD *)(v10 + 1360);
              if ( v13 == EtwpHostSiloState )
                v14 = *(_QWORD *)(KeGetPrcb(v11) + 35752) + 320LL;
              else
                v14 = *(_QWORD *)(v13 + 4416) + ((unsigned __int64)v11 << 6);
              ++v11;
              *((_QWORD *)&v18 + 1) += *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * j);
            }
            while ( v11 != v12 );
          }
          Data.Size = 24;
          Data.Data = &v18;
          v8 = PcwAddInstance(v3, (PCUNICODE_STRING)(v10 + 136), j, 1u, &Data);
          EtwpReleaseLoggerContext((unsigned int *)v10, 0);
          if ( v8 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v8;
  }
  return result;
}
