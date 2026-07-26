/*
 * XREFs of NdisMQueryAdapterResources @ 0x14009D980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

void __stdcall NdisMQueryAdapterResources(
        PNDIS_STATUS Status,
        NDIS_HANDLE WrapperConfigurationContext,
        PNDIS_RESOURCE_LIST ResourceList,
        PUINT BufferSize)
{
  __int64 v4; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  unsigned int v10; // ecx
  char v11[8]; // [rsp+28h] [rbp-30h]

  v4 = *((_QWORD *)WrapperConfigurationContext + 1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_QWORD *)v11 = *((_QWORD *)WrapperConfigurationContext + 1);
    LOBYTE(WrapperConfigurationContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)WrapperConfigurationContext,
      1,
      54,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      v11[0]);
  }
  v8 = *(_QWORD *)(v4 + 944);
  v9 = 0;
  if ( v8 )
  {
    v10 = 20 * *(_DWORD *)(v8 + 16) + 8;
    if ( *BufferSize >= v10 )
    {
      memmove(ResourceList, (const void *)(v8 + 12), v10);
    }
    else
    {
      *BufferSize = v10;
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741823;
  }
  *Status = v9;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x37u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      v4,
      v9);
}
