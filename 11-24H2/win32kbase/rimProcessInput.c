/*
 * XREFs of rimProcessInput @ 0x1400BC820
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1400E3BB8 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMFixUpCompleteFrames @ 0x1400BC7A8 (RIMFixUpCompleteFrames.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400BCD88 (rimObsDeliverToNonExclusiveObservers.c)
 *     RIMFixUpCompleteFrame @ 0x1400BD0EC (RIMFixUpCompleteFrame.c)
 *     RIMFreeUserMem @ 0x1401DA7F0 (RIMFreeUserMem.c)
 *     rimAllocUserMemInternal @ 0x1401DA894 (rimAllocUserMemInternal.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall rimProcessInput(__int64 a1, __int64 a2, unsigned int *a3, __m128i *a4, int a5)
{
  char v8; // r13
  __m128i v9; // xmm1
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int *v17; // r14
  unsigned int *v18; // rdi
  int v19; // edx
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  void *v23; // rcx
  size_t v24; // r8
  char *v25; // rcx
  __int64 v26; // rax
  void *v27; // rcx
  CTouchProcessor *v28; // rcx
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  bool v33; // [rsp+41h] [rbp-67h]
  __int64 Src; // [rsp+48h] [rbp-60h] BYREF
  __int64 v35; // [rsp+50h] [rbp-58h] BYREF
  __m128i Size; // [rsp+58h] [rbp-50h] BYREF
  char v37; // [rsp+C8h] [rbp+20h]

  Src = 0LL;
  v8 = 0;
  v9 = *a4;
  Size = *a4;
  v10 = *(_DWORD *)(a2 + 48);
  if ( !v10 )
  {
    v13 = 1;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v13 = 2;
    goto LABEL_6;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 )
    {
      v13 = 32;
      goto LABEL_6;
    }
    v19 = *(_DWORD *)(*(_QWORD *)(a2 + 456) + 24LL);
    if ( v19 == 7 )
    {
      v13 = 8;
      goto LABEL_6;
    }
    if ( (unsigned int)(v19 - 5) <= 1 )
    {
      v13 = 4;
      goto LABEL_6;
    }
    if ( (unsigned int)(v19 - 1) <= 3 )
    {
      v13 = 16;
      goto LABEL_6;
    }
    goto LABEL_51;
  }
  if ( v12 != 1 )
  {
LABEL_51:
    v13 = 0;
    goto LABEL_6;
  }
  v13 = (*(_DWORD *)(a2 + 168) & 0x1000) != 0 ? 8 : 16;
LABEL_6:
  v14 = *(unsigned int *)(a1 + 888);
  if ( *(_DWORD *)(a1 + 848) )
  {
    if ( Size.m128i_i64[1] > v14 )
    {
      v35 = 0LL;
      rimAllocUserMemInternal(a1, Size.m128i_i64[1], &v35);
      Src = v35;
      if ( v35 )
      {
        v27 = *(void **)(a1 + 880);
        if ( (unsigned __int64)v27 >= MmUserProbeAddress )
          v27 = (void *)MmUserProbeAddress;
        LOBYTE(v14) = (unsigned __int8)RtlCopyVolatileMemory(v27, &Src, 8uLL);
      }
      else
      {
        v28 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (LOBYTE(v28) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          LOBYTE(v28) = 0;
        }
        v37 = (char)v28;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v28);
          LOBYTE(v30) = v33;
          LOBYTE(v31) = v37;
          LOBYTE(v14) = WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v31,
                          v30,
                          *(_QWORD *)(UserSessionState + 19392),
                          4,
                          1,
                          14,
                          (__int64)&WPP_8b3d8589f9583a031a0fbbc3118bab56_Traceguids);
        }
        Size.m128i_i32[0] = -1073741801;
      }
    }
    if ( Size.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 776) = 1;
    }
    else
    {
      v20 = *(_DWORD **)(a1 + 856);
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v13;
      v21 = *(_QWORD *)(a2 + 328);
      if ( !v21 )
        v21 = *(_QWORD *)(a2 + 16);
      v22 = *(_QWORD **)(a1 + 864);
      if ( (unsigned __int64)v22 >= MmUserProbeAddress )
        v22 = (_QWORD *)MmUserProbeAddress;
      *v22 = v21;
      v23 = *(void **)(a1 + 872);
      if ( (unsigned __int64)v23 >= MmUserProbeAddress )
        v23 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v23, &Size, 0x10uLL);
      v24 = Size.m128i_u64[1];
      v25 = **(char ***)(a1 + 880);
      if ( (unsigned __int64)&v25[Size.m128i_i64[1]] > MmUserProbeAddress || &v25[Size.m128i_i64[1]] <= v25 )
        *(_BYTE *)MmUserProbeAddress = 0;
      LOBYTE(v14) = (unsigned __int8)memmove(v25, a3, v24);
      if ( a5 )
        LOBYTE(v14) = (unsigned __int8)RIMFixUpCompleteFrames(
                                         a1,
                                         a2,
                                         **(unsigned int ***)(a1 + 880),
                                         a3,
                                         Size.m128i_u32[2]);
      else
        v8 = 1;
    }
  }
  else
  {
    v15 = _mm_srli_si128(v9, 8).m128i_u64[0];
    if ( v15 > v14 )
    {
      v26 = Win32AllocPoolZInitImpl(256LL, v15, 0x656D4B52u);
      Src = v26;
      if ( v26 )
        **(_QWORD **)(a1 + 880) = v26;
      else
        Size.m128i_i32[0] = -1073741801;
      v9 = Size;
    }
    v14 = *(_QWORD *)(a1 + 872);
    *(__m128i *)v14 = v9;
    if ( Size.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 856) = v13;
      if ( _bittest((const signed __int32 *)(a2 + 168), 0xDu) )
      {
        v16 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v16 = *(_QWORD *)(a2 + 328);
        if ( !v16 )
          v16 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 864) = v16;
      memmove(**(void ***)(a1 + 880), a3, Size.m128i_u64[1]);
      LODWORD(v14) = *(_DWORD *)(a2 + 168);
      if ( (v14 & 0x2000) != 0 || (v14 & 0x40) != 0 )
      {
        LODWORD(v14) = *(_DWORD *)(a2 + 48);
        if ( (_DWORD)v14 )
        {
          if ( (_DWORD)v14 == 1 )
            *(_DWORD *)(a2 + 672) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 896) = 0;
        }
      }
      if ( a5 )
      {
        v14 = *(_QWORD *)(a1 + 880);
        v17 = *(unsigned int **)v14;
        v18 = (unsigned int *)((char *)a3 + Size.m128i_u32[2]);
        while ( a3 < v18 )
        {
          RIMFixUpCompleteFrame(a1, a2, v17, a3, 0);
          a3 = (unsigned int *)((char *)a3 + *a3);
          v14 = *v17;
          v17 = (unsigned int *)((char *)v17 + v14);
        }
      }
      else
      {
        v8 = 1;
      }
    }
  }
  if ( v8 )
    LOBYTE(v14) = rimObsDeliverToNonExclusiveObservers((struct RIMDEV *)a2);
  return v14;
}
