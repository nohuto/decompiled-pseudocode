/*
 * XREFs of ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C7A8C
 * Callers:
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1400A5B84 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C2E80 (-ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_DDD @ 0x14007B380 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400A89CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1400C83A4 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_LLL @ 0x1400C86E4 (WPP_RECORDER_SF_LLL_ea_1400C86E4.c)
 *     WPP_RECORDER_SF_LLLL @ 0x1400C87C0 (WPP_RECORDER_SF_LLLL.c)
 *     WPP_RECORDER_SF_LLLLLLq @ 0x1400C88BC (WPP_RECORDER_SF_LLLLLLq.c)
 *     WPP_RECORDER_SF_qDqLq @ 0x1400C8A30 (WPP_RECORDER_SF_qDqLq.c)
 *     WPP_RECORDER_SF_qDqLqD @ 0x1400C8B5C (WPP_RECORDER_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 FirstClassificationElementOffset,
        struct _NDIS_QOS_PARAMETERS *a3,
        __int64 ClassificationElementSize,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  char v6; // di
  UCHAR *v9; // r8
  _NDIS_QOS_CAPABILITIES *QosCurrentCapabilities; // rsi
  unsigned int NumTrafficClasses; // ecx
  int v13; // r15d
  unsigned int v14; // r11d
  int v15; // r10d
  bool v16; // zf
  unsigned int i; // ecx
  char v18; // al
  int v19; // eax
  __int64 NumClassificationElements; // r11
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int j; // r10d
  int v24; // esi
  int v25; // edx
  char v26[8]; // [rsp+28h] [rbp-80h]
  struct _NDIS_QOS_PARAMETERS *v27; // [rsp+38h] [rbp-70h]
  char v28[4]; // [rsp+40h] [rbp-68h]
  unsigned int *v29; // [rsp+48h] [rbp-60h]

  v5 = ClassificationElementSize;
  v6 = FirstClassificationElementOffset;
  v9 = (UCHAR *)&WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v29 = a5;
    *(_DWORD *)v28 = ClassificationElementSize;
    v27 = a3;
    *(_DWORD *)&v26[4] = HIDWORD(a1);
    WPP_RECORDER_SF_qDqLq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      FirstClassificationElementOffset,
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      ClassificationElementSize);
    v9 = (UCHAR *)&WPP_RECORDER_INITIALIZED;
  }
  if ( a5 )
    *a5 = 52;
  QosCurrentCapabilities = a1->QosCurrentCapabilities;
  if ( !QosCurrentCapabilities )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          11,
          94,
          (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids);
    }
    return 3221225659LL;
  }
  if ( (a3->Flags & 2) != 0 )
  {
    NumTrafficClasses = a3->NumTrafficClasses;
    v13 = 0;
    v14 = 0;
    LODWORD(ClassificationElementSize) = 0;
    v15 = 0;
    if ( NumTrafficClasses )
    {
      if ( !v6 || NumTrafficClasses <= QosCurrentCapabilities->MaxNumTrafficClasses )
      {
        LODWORD(FirstClassificationElementOffset) = 0;
        LODWORD(v9) = 1;
        while ( (unsigned int)FirstClassificationElementOffset < 8 )
        {
          v9 = (UCHAR *)a3->PriorityAssignmentTable[(unsigned int)FirstClassificationElementOffset];
          if ( (unsigned __int8)v9 >= 8u )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              LODWORD(v27) = 8;
              WPP_RECORDER_SF_DDD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0xBu,
                0x61u,
                (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                FirstClassificationElementOffset,
                (char)v9,
                v27,
                *(_DWORD *)v28,
                v29);
            }
            return 3221291029LL;
          }
          if ( _bittest(&v13, (unsigned int)v9) )
          {
            LODWORD(v9) = 1;
          }
          else
          {
            v13 |= 1 << (char)v9;
            ++v14;
            v16 = a3->TsaAssignmentTable[(_QWORD)v9] == 2;
            LODWORD(v9) = 1;
            if ( v16 )
              LODWORD(ClassificationElementSize) = ClassificationElementSize + 1;
          }
          LODWORD(FirstClassificationElementOffset) = FirstClassificationElementOffset + 1;
        }
        if ( v14 > NumTrafficClasses )
        {
          if ( !v6 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0xBu,
                0x63u,
                (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                v14,
                a3->NumTrafficClasses,
                v27,
                *(_DWORD *)v28,
                v29);
            return 3221291029LL;
          }
        }
        else if ( !v6
               || (unsigned int)ClassificationElementSize <= QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= 8 )
            {
              if ( !v15 || v15 == 100 )
                goto LABEL_75;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                *(_DWORD *)v26 = v15;
                WPP_RECORDER_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0xBu,
                  0x68u,
                  (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                  *(_QWORD *)v26);
              }
              return 3221291029LL;
            }
            if ( _bittest(&v13, i) )
            {
              LOBYTE(FirstClassificationElementOffset) = i;
              v18 = a3->TsaAssignmentTable[i];
              if ( v18 )
              {
                if ( v18 != 2 )
                {
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    WPP_RECORDER_SF_DDDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x67u,
                      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                      i,
                      v18,
                      0,
                      2,
                      v29);
                  }
                  return 3221291029LL;
                }
                v19 = a3->TcBandwidthAssignmentTable[i];
                if ( !(_BYTE)v19 )
                {
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    WPP_RECORDER_SF_Ld(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x66u,
                      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                      i,
                      i);
                  }
                  return 3221291029LL;
                }
                v15 += v19;
              }
              else
              {
                if ( v6 && (QosCurrentCapabilities->Flags & 1) == 0 )
                  goto LABEL_37;
                if ( a3->TcBandwidthAssignmentTable[i] )
                {
                  if ( v6 )
                  {
LABEL_37:
                    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                      && *((_WORD *)WPP_GLOBAL_Control + 36) )
                    {
                      WPP_RECORDER_SF_DDDD(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        5u,
                        0xBu,
                        0x64u,
                        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                        i,
                        QosCurrentCapabilities->Flags,
                        i,
                        a3->TcBandwidthAssignmentTable[i],
                        v29);
                    }
                    return 3221291029LL;
                  }
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
                    && *((_WORD *)WPP_GLOBAL_Control + 36) )
                  {
                    LODWORD(v27) = a3->TcBandwidthAssignmentTable[i];
                    WPP_RECORDER_SF_DDD(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      5u,
                      0xBu,
                      0x65u,
                      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
                      i,
                      i,
                      v27,
                      *(_DWORD *)v28,
                      v29);
                  }
                  return 3221291029LL;
                }
              }
            }
          }
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          WPP_RECORDER_SF_LLLL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            QosCurrentCapabilities->MaxNumEtsCapableTrafficClasses,
            (_DWORD)WPP_GLOBAL_Control,
            ClassificationElementSize);
        return 3221291029LL;
      }
    }
    else if ( !v6 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          11,
          96,
          (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids);
      return 3221291029LL;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0xBu,
        0x5Fu,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        NumTrafficClasses,
        QosCurrentCapabilities->MaxNumTrafficClasses,
        v27,
        *(_DWORD *)v28,
        v29);
    return 3221291029LL;
  }
LABEL_75:
  if ( (a3->Flags & 0x20000) != 0 )
  {
    FirstClassificationElementOffset = a3->FirstClassificationElementOffset;
    NumClassificationElements = a3->NumClassificationElements;
    ClassificationElementSize = a3->ClassificationElementSize;
    v9 = &a3->Header.Type + FirstClassificationElementOffset;
    if ( (_DWORD)NumClassificationElements
      && ((unsigned int)ClassificationElementSize < 0x10
       || (ClassificationElementSize & 3) != 0
       || (unsigned int)FirstClassificationElementOffset < 0x34
       || (unsigned int)FirstClassificationElementOffset > v5
       || ((unsigned __int8)v9 & 3) != 0) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLLLLLq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FirstClassificationElementOffset,
          (_DWORD)v9,
          ClassificationElementSize);
      return 3221291029LL;
    }
    v21 = NumClassificationElements * ClassificationElementSize;
    if ( (unsigned __int64)(NumClassificationElements * ClassificationElementSize) > 0xFFFFFFFF
      || (v22 = v21 + FirstClassificationElementOffset,
          v21 + (int)FirstClassificationElementOffset < (unsigned int)FirstClassificationElementOffset) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          FirstClassificationElementOffset,
          (_DWORD)v9,
          ClassificationElementSize);
      return 3221291029LL;
    }
    if ( v5 < v22 )
    {
      if ( a5 )
        *a5 = v22;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x6Bu,
          (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
          v5,
          v21 + FirstClassificationElementOffset);
      return 3221291028LL;
    }
    for ( j = 0; j < (unsigned int)NumClassificationElements; ++j )
    {
      if ( *v9 != 0xB7 || !v9[1] || *((_WORD *)v9 + 1) < 0x10u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v26 = j;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x6Cu,
            (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
            *(_QWORD *)v26);
        }
        return 3221291029LL;
      }
      v24 = *((_DWORD *)v9 + 1);
      if ( (v24 & 0xFF000000) != 0
        || (unsigned __int16)(*((_WORD *)v9 + 4) - 1) > 5u
        || *((_WORD *)v9 + 6)
        || *((_WORD *)v9 + 7) >= 8u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v25 = *((unsigned __int16 *)v9 + 6);
          LOBYTE(v25) = 5;
          WPP_RECORDER_SF_DDDDDDDDDDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v25,
            11,
            109,
            (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
            j,
            v24,
            0,
            0,
            *((_WORD *)v9 + 4),
            7,
            *((_WORD *)v9 + 6),
            1,
            0,
            *((_WORD *)v9 + 7),
            8);
        }
        return 3221291029LL;
      }
      v9 += ClassificationElementSize;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqLqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      FirstClassificationElementOffset,
      (_DWORD)v9,
      ClassificationElementSize);
  return 0LL;
}
