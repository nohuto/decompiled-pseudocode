/*
 * XREFs of XilCoreCommonBuffer_RebalanceBuffers @ 0x1400296BC
 * Callers:
 *     XilCoreCommonBuffer_RebalanceResources @ 0x140029588 (XilCoreCommonBuffer_RebalanceResources.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall XilCoreCommonBuffer_RebalanceBuffers(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  __int64 *v4; // r14
  __int64 *v5; // rbx
  _DWORD *v6; // rdi
  _QWORD *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // r8
  __int64 **v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_DWORD *)(a2 + 20);
  v4 = (__int64 *)(a2 + 48);
  v5 = *(__int64 **)(a2 + 48);
  v6 = (_DWORD *)a2;
  while ( v5 != v4 && v6[7] > v3 )
  {
    if ( *((_BYTE *)v5 + 16) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          a2,
          8,
          23,
          (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
          (char)v5);
      }
      v9 = v6[1];
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v13 = &v5[13 * v10 + 4];
          v14 = (__int64 *)*v13;
          if ( *(__int64 **)(*v13 + 8) != v13 )
            break;
          v15 = (__int64 **)v13[1];
          if ( *v15 != v13 )
            break;
          *v15 = v14;
          v14[1] = (__int64)v15;
          v13[1] = (__int64)v13;
          *v13 = (__int64)v13;
          v16 = v13 + 6;
          v17 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 )
            break;
          v18 = (_QWORD *)v16[1];
          if ( (_QWORD *)*v18 != v16 )
            break;
          *v18 = v17;
          ++v10;
          *(_QWORD *)(v17 + 8) = v18;
          v16[1] = v16;
          *v16 = v16;
          v9 = v6[1];
          if ( v10 >= v9 )
            goto LABEL_15;
        }
LABEL_19:
        __fastfail(3u);
      }
LABEL_15:
      v6[7] -= v9;
      v6[6] -= v9;
      v11 = (__int64 *)*v5;
      if ( *(__int64 **)(*v5 + 8) != v5 )
        goto LABEL_19;
      v12 = (__int64 **)v5[1];
      if ( *v12 != v5 )
        goto LABEL_19;
      *v12 = v11;
      v11[1] = (__int64)v12;
      result = a1 + 184;
      a2 = *(_QWORD *)(a1 + 192);
      if ( *(_QWORD *)a2 != a1 + 184 )
        goto LABEL_19;
      *v5 = result;
      v5[1] = a2;
      *(_QWORD *)a2 = v5;
      *(_QWORD *)(a1 + 192) = v5;
      v5 = v11;
      ++*(_DWORD *)(a1 + 176);
    }
    else
    {
      LODWORD(a2) = v6[1];
      result = 0LL;
      if ( (_DWORD)a2 )
      {
        v8 = v5 + 13;
        do
        {
          if ( *v8 )
            break;
          result = (unsigned int)(result + 1);
          v8 += 13;
        }
        while ( (unsigned int)result < (unsigned int)a2 );
      }
      if ( (_DWORD)result == (_DWORD)a2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          result = (__int64)WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            result = WPP_RECORDER_SF_q(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                       a2,
                       8,
                       24,
                       (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
                       (char)v5);
          }
        }
        *((_BYTE *)v5 + 16) = 1;
        --*(_DWORD *)(a1 + 204);
      }
      v5 = (__int64 *)*v5;
    }
  }
  return result;
}
