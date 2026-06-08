/*
 * XREFs of Display_CPC @ 0x140034044
 * Callers:
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x140003B94 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     GetCpcRegisterDefinitionTable @ 0x140009058 (GetCpcRegisterDefinitionTable.c)
 *     DisplayGenAddr @ 0x140028380 (DisplayGenAddr.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140033E84 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 */

void __fastcall Display_CPC(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // r8
  __int64 v3; // r9
  const char **v4; // rdi
  __int64 v5; // rbp
  unsigned __int8 *v6; // rsi
  unsigned int *v7; // rdx
  unsigned int i; // edi
  __int64 v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+28h] [rbp-40h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  const char **v12; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 )
  {
    v12 = 0LL;
    v11 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          153,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            154,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v10 = *(_DWORD *)a1;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x9Bu,
              (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
              v10);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v9) = *(_DWORD *)(a1 + 4);
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x9Cu,
              (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
              v9);
          }
        }
      }
    }
    GetCpcRegisterDefinitionTable(a1, &v12, &v11);
    if ( v11 )
    {
      v4 = v12;
      v5 = v11;
      do
      {
        v6 = (unsigned __int8 *)(a1 + *(unsigned int *)v4);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x9Du,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
            v4[1]);
        DisplayGenAddr(v6, "  ", v2, v3);
        v4 += 3;
        --v5;
      }
      while ( v5 );
    }
    if ( *(_QWORD *)(a1 + 536) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          158,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      v7 = *(unsigned int **)(a1 + 536);
      for ( i = 0; i < *v7; ++i )
      {
        DisplayCpcResourcePriorityRegisterDescriptor(&v7[26 * i + 2], i, v2, v3);
        v7 = *(unsigned int **)(a1 + 536);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          2,
          159,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
  }
}
