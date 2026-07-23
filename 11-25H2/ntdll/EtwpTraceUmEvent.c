/*
 * XREFs of EtwpTraceUmEvent @ 0x180090890
 * Callers:
 *     EtwLogTraceEvent @ 0x1800E48A0 (EtwLogTraceEvent.c)
 *     EtwTraceEventInstance @ 0x18015D5B0 (EtwTraceEventInstance.c)
 * Callees:
 *     EtwpRelogEvent @ 0x180090C10 (EtwpRelogEvent.c)
 *     EtwpDemuxUmTraceHandle @ 0x180090EC0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpReserveTraceBuffer @ 0x180090FE0 (EtwpReserveTraceBuffer.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpTraceUmEvent(unsigned __int16 a1, unsigned __int16 *a2, unsigned int a3, int a4)
{
  size_t v5; // r15
  unsigned int v7; // esi
  unsigned int v8; // r8d
  unsigned int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  unsigned int v12; // edi
  __int16 v13; // r12
  unsigned int v14; // edi
  unsigned int v15; // r8d
  unsigned int v16; // edi
  unsigned int i; // edx
  unsigned int v18; // ecx
  int v19; // r12d
  struct _TEB *v20; // rax
  unsigned __int64 *v21; // r9
  __int64 Reserved; // r8
  size_t v23; // rdi
  char *v24; // rax
  size_t v25; // r8
  char *v26; // r15
  const void *v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rdi
  char *v30; // rcx
  unsigned __int64 v31; // rax
  struct _TEB *v32; // rax
  char *v33; // rcx
  int v34; // eax
  __int64 result; // rax
  unsigned int v36; // [rsp+30h] [rbp-1C8h]
  unsigned int v37; // [rsp+34h] [rbp-1C4h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-1C0h]
  unsigned int v39; // [rsp+3Ch] [rbp-1BCh]
  unsigned int v40; // [rsp+40h] [rbp-1B8h]
  unsigned int v41; // [rsp+44h] [rbp-1B4h]
  int v42; // [rsp+48h] [rbp-1B0h]
  void *Src; // [rsp+50h] [rbp-1A8h]
  int v44; // [rsp+58h] [rbp-1A0h]
  char *v45; // [rsp+60h] [rbp-198h]
  __int64 v46; // [rsp+68h] [rbp-190h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-188h] BYREF
  int UniqueThread; // [rsp+78h] [rbp-180h]
  int UniqueProcess; // [rsp+7Ch] [rbp-17Ch]
  char *v50; // [rsp+80h] [rbp-178h]
  __int64 v51; // [rsp+88h] [rbp-170h]
  struct _TEB *v52; // [rsp+90h] [rbp-168h]
  struct _TEB *v53; // [rsp+98h] [rbp-160h]
  _CLIENT_ID *p_ClientId; // [rsp+A0h] [rbp-158h]
  void *v55[32]; // [rsp+B0h] [rbp-148h] BYREF

  v5 = a3;
  v7 = 0;
  v46 = 0LL;
  v40 = 0;
  v47 = 0LL;
  v8 = a1;
  v9 = a1 & 0x7FFF;
  v37 = v9;
  v10 = EtwpLoggerArray;
  if ( !EtwpLoggerArray )
    return 4201LL;
  if ( v9 < 0x40 )
  {
LABEL_3:
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 16LL * v9 + 8));
    v11 = *(_DWORD **)(EtwpLoggerArray + 16LL * v9);
    if ( (*(_BYTE *)(EtwpLoggerArray + 16LL * v9) & 1) == 0 )
    {
      v51 = *(_QWORD *)(EtwpLoggerArray + 16LL * v9);
      v36 = 0;
      v12 = *a2;
      v38 = v12;
      if ( v12 < (unsigned int)v5 )
      {
        v36 = 87;
        goto LABEL_43;
      }
      v44 = *((_DWORD *)a2 + 11);
      v13 = v44;
      if ( (v44 & 0x200000) != 0 )
      {
        v36 = EtwpRelogEvent(v11, a2);
LABEL_43:
        _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * (unsigned int)v11[5] + 8));
        return v36;
      }
      v42 = v44 & 0x100000;
      if ( (v44 & 0x100000) != 0 )
      {
        v39 = 0;
        Src = (char *)a2 + v5;
        v14 = v12 - v5;
        if ( v14 > 0x100 )
        {
          v36 = 13;
          goto LABEL_43;
        }
        memset_thunk_772440563353939046(v55, 0, 0x100uLL);
        if ( v14 )
          memmove(v55, Src, v14);
        v15 = v5;
        v38 = v5;
        v16 = v14 >> 4;
        v40 = v16;
        for ( i = 0; ; ++i )
        {
          v39 = i;
          if ( i >= v16 )
            break;
          v18 = (unsigned int)v55[2 * i + 1];
          v15 += v18;
          v38 = v15;
          if ( v15 < v18 )
          {
            v36 = 234;
            goto LABEL_43;
          }
        }
      }
      v19 = v13 & 0x200;
      v20 = NtCurrentTeb();
      v52 = v20;
      v21 = &v47;
      if ( v19 )
        v21 = 0LL;
      Reserved = v20->CurrentIdealProcessor.Reserved;
      v23 = v38;
      LODWORD(Src) = v38;
      v24 = (char *)EtwpReserveTraceBuffer(v11, v38, Reserved, v21, &v46);
      v45 = v24;
      if ( v24 )
      {
        if ( v42 )
        {
          v41 = 0;
          v25 = v5;
          v26 = &v24[v5];
          v50 = v26;
          memmove(v24, a2, v25);
          while ( 1 )
          {
            v41 = v7;
            if ( v7 >= v40 )
              break;
            v27 = v55[2 * v7];
            v28 = (unsigned int)v55[2 * v7 + 1];
            if ( v27 )
            {
              if ( v28 )
              {
                v29 = v28;
                memmove(v26, v27, v28);
                v26 += v29;
                v50 = v26;
              }
            }
            ++v7;
          }
          LODWORD(v23) = (_DWORD)Src;
        }
        else
        {
          memmove(v24, a2, v23);
        }
        v30 = v45;
        if ( (v44 & 0x80000) != 0 )
          *(_OWORD *)(v45 + 24) = *(_OWORD *)*((_QWORD *)a2 + 3);
        if ( !v19 )
        {
          v31 = v47;
          *((_QWORD *)v30 + 2) = v47;
          if ( v11[4] != 3 )
            v31 = __rdtsc();
          *((_QWORD *)v30 + 5) = v31;
        }
        *(_DWORD *)v30 = a4 | v23;
        v32 = NtCurrentTeb();
        v53 = v32;
        p_ClientId = &v32->ClientId;
        UniqueThread = (int)v32->ClientId.UniqueThread;
        v33 = v45;
        *((_DWORD *)v45 + 2) = UniqueThread;
        UniqueProcess = (int)v32->ClientId.UniqueProcess;
        *((_DWORD *)v33 + 3) = UniqueProcess;
        _InterlockedDecrement((volatile signed __int32 *)(v46 + 12));
      }
      else if ( (unsigned int)v23 > 0xFFF8 )
      {
        v36 = 534;
      }
      else
      {
        v34 = 8;
        if ( (unsigned int)v23 > v11[49] )
          v34 = 234;
        v36 = v34;
      }
      goto LABEL_43;
    }
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v37 + 8));
    return 4201LL;
  }
  result = EtwpDemuxUmTraceHandle(v8, &v37);
  if ( !(_DWORD)result )
  {
    v9 = v37;
    v10 = EtwpLoggerArray;
    goto LABEL_3;
  }
  return result;
}
