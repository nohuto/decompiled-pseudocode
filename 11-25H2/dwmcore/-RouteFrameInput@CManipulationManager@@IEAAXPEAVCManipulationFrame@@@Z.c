/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18017FA8C
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AEBB0 (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18017FE14 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x1801814B8 (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180181580 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE950 (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801AF4A8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  CManipulationManager *v3; // r13
  int v4; // r15d
  char *v5; // rsi
  __int64 v6; // rax
  char v7; // si
  bool v8; // si
  unsigned int v9; // edi
  bool v10; // cf
  __int64 v11; // r12
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r14
  void *v16; // rdx
  unsigned int v17; // r13d
  void *v18; // r15
  int v19; // edi
  __int64 v20; // r12
  char v21; // al
  int v22; // [rsp+40h] [rbp-E8h]
  int v23; // [rsp+44h] [rbp-E4h] BYREF
  int v24; // [rsp+48h] [rbp-E0h] BYREF
  void *v25; // [rsp+50h] [rbp-D8h] BYREF
  void *v26; // [rsp+58h] [rbp-D0h]
  __int128 v27; // [rsp+60h] [rbp-C8h]
  __int128 v28; // [rsp+70h] [rbp-B8h]
  __int128 v29; // [rsp+80h] [rbp-A8h]
  __int128 v30; // [rsp+90h] [rbp-98h]
  __int128 v31; // [rsp+A0h] [rbp-88h]
  __int128 v32; // [rsp+B0h] [rbp-78h]
  __int128 v33; // [rsp+C0h] [rbp-68h]
  __int128 v34; // [rsp+D0h] [rbp-58h]
  __int128 v35; // [rsp+E0h] [rbp-48h]
  bool v37; // [rsp+140h] [rbp+18h]
  unsigned int v38; // [rsp+148h] [rbp+20h]

  v3 = this;
  v4 = 0;
  v22 = 0;
  v5 = (char *)a2 + 176;
  v6 = 256LL;
  if ( *((_DWORD *)a2 + 92) != 5 )
    v6 = 248LL;
  if ( *(_QWORD *)((char *)this + v6) - *((_QWORD *)a2 + 56) > *((_QWORD *)this + 34) )
  {
    *v5 |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v7 = *v5;
  if ( (v7 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v8 = (v7 & 4) != 0;
LABEL_8:
    v9 = 0;
    v38 = 0;
    v37 = v8;
LABEL_9:
    v10 = v9 < *((_DWORD *)a2 + 4);
    while ( v10 )
    {
      v11 = 248LL * v9;
      v24 = v8;
      if ( (*((_BYTE *)a2 + v11 + 608) & 1) == v24
        && *(_DWORD *)((char *)a2 + v11 + 376)
        && !*(_DWORD *)((char *)a2 + v11 + 600) )
      {
        if ( *(_QWORD *)((char *)a2 + v11 + 392) == -1LL || CManipulationManager::CheckForBufferedDescendant(v3, a2, v9) )
        {
          v22 = ++v4;
        }
        else
        {
          CReadWriteLock::AcquireExclusive((CReadWriteLock *)&CManipulationManager::s_rwPointerBufferLock);
          v15 = 0LL;
          LODWORD(v25) = 0;
          v16 = *(void **)((char *)a2 + v11 + 392);
          v26 = v16;
          if ( v9 < *((_DWORD *)a2 + 4) )
          {
            v17 = v9;
            v18 = v16;
            v19 = v24;
            do
            {
              v20 = 248LL * v17;
              if ( *(void **)((char *)a2 + v20 + 392) == v18
                && (*((_BYTE *)a2 + v20 + 608) & 1) == v19
                && *(_DWORD *)((char *)a2 + v20 + 376) )
              {
                CManipulationManager::s_rgPointerIds[v15] = *(_DWORD *)((char *)a2 + v20 + 372);
                v15 = (unsigned int)(v15 + 1);
                *(_DWORD *)((char *)a2 + v20 + 376) = 0;
                if ( (unsigned int)dword_180404D18 > 4
                  && (byte_180404D28 & 2) != 0
                  && (qword_180404D30 & 2) == qword_180404D30 )
                {
                  v25 = v18;
                  v24 = *(_DWORD *)((char *)a2 + v20 + 372);
                  v23 = *((_DWORD *)a2 + 6);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    v12,
                    (unsigned int)&unk_1803D5352,
                    v13,
                    v14,
                    (__int64)&v23,
                    (__int64)&v24,
                    (__int64)&v25);
                }
                v27 = *((_OWORD *)a2 + 2);
                v28 = *((_OWORD *)a2 + 3);
                v29 = *((_OWORD *)a2 + 4);
                v30 = *((_OWORD *)a2 + 5);
                v31 = *((_OWORD *)a2 + 6);
                v32 = *((_OWORD *)a2 + 7);
                v33 = *((_OWORD *)a2 + 8);
                v34 = *((_OWORD *)a2 + 9);
                v35 = *((_OWORD *)a2 + 10);
                InputTraceLogging::GestureTargeting::RoutePointer(
                  *((_QWORD *)a2 + 56),
                  v27,
                  *((_DWORD *)a2 + 6),
                  *(_DWORD *)((char *)a2 + v20 + 372),
                  v18);
              }
              ++v17;
            }
            while ( v17 < *((_DWORD *)a2 + 4) );
            LODWORD(v25) = v15;
            v9 = v38;
            v8 = v37;
            v4 = v22;
            v3 = this;
            v16 = v26;
          }
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v16,
            (unsigned int)v15,
            CManipulationManager::s_rgPointerIds,
            (char *)a2 + 32);
          *((_DWORD *)a2 + 5) += v15;
          dword_18040AC78 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v38 = ++v9;
      v10 = v9 < *((_DWORD *)a2 + 4);
      if ( v9 == *((_DWORD *)a2 + 4) )
      {
        if ( !v8 )
          goto LABEL_9;
        v8 = 0;
        goto LABEL_8;
      }
    }
    v21 = *((_BYTE *)a2 + 176) & 0xFE;
    *((_BYTE *)a2 + 176) = v21;
    if ( !v4 )
      *((_BYTE *)a2 + 176) = v21 & 0xFB;
  }
}
