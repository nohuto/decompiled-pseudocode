/*
 * XREFs of ?SetPolicySchemas@CVirtualProtectedOutput@@UEAAJKPEAU_GUID@@PEAK@Z @ 0x14006D490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualProtectedOutput::SetPolicySchemas(
        CVirtualProtectedOutput *this,
        unsigned int a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // r10
  struct _GUID *v9; // rbp
  int v10; // r9d
  __int64 v11; // r11
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax

  v5 = 0;
  v6 = 0LL;
  v8 = 0LL;
  v9 = a3;
  while ( 1 )
  {
    v10 = v6;
    if ( v5 < 0 )
      break;
    if ( (unsigned int)v8 >= a2 )
    {
      v5 = (*(__int64 (__fastcall **)(CVirtualProtectedOutput *, __int64, struct _GUID *, _QWORD))(*(_QWORD *)this + 40LL))(
             this,
             v6,
             a3,
             (unsigned int)v6);
      if ( v5 >= 0 )
        return (unsigned int)v5;
      break;
    }
    a3 = (struct _GUID *)a4[v8];
    v11 = *(_QWORD *)&v9[(unsigned int)v8].Data1;
    v12 = _mm_srli_si128((__m128i)v9[(unsigned int)v8], 8).m128i_u64[0];
    v13 = *(_QWORD *)&MFPROTECTION_DISABLE.Data1 - v11;
    if ( *(_QWORD *)&MFPROTECTION_DISABLE.Data1 == v11 )
      v13 = *(_QWORD *)MFPROTECTION_DISABLE.Data4 - v12;
    if ( v13 )
    {
      v14 = *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 - v11;
      if ( *(_QWORD *)&MFPROTECTION_CONSTRICTAUDIO.Data1 == v11 )
        v14 = *(_QWORD *)MFPROTECTION_CONSTRICTAUDIO.Data4 - v12;
      if ( v14 )
      {
        v5 = -2147467263;
      }
      else
      {
        if ( (unsigned int)a3 >= 0x100 )
        {
LABEL_20:
          v5 = -2147024809;
          break;
        }
        v6 = (unsigned __int8)a3;
        if ( v10 > (unsigned __int8)a3 )
          v6 = (unsigned int)v10;
      }
    }
    else
    {
      if ( (unsigned int)a3 >= 2 )
        goto LABEL_20;
      if ( ((unsigned __int8)a3 & 1) != 0 && (int)v6 <= 4 )
        v6 = 4LL;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_54b82945556c3d10a6b677da0424b62c_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CVirtualProtectedOutput::SetPolicySchemas", 333, v5);
  return (unsigned int)v5;
}
