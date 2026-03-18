/*
 * XREFs of DwmAsyncSendTouchContacts @ 0x14018EDE0
 * Callers:
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline @ 0x1403244C8 (Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DwmAsyncSendTouchContacts(PVOID Object, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  _WORD *v9; // rax
  _WORD *v10; // rsi
  _OWORD *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int128 v14; // xmm1

  v8 = -1073741823;
  if ( Object && a2 && a4 )
  {
    v9 = (_WORD *)PALLOCMEM(40 * (a4 - 1) + 100, 1951225668LL);
    v10 = v9;
    if ( v9 )
    {
      v11 = v9 + 30;
      *v9 = 40 * a4 + 20;
      v9[1] = 40 * a4
            + ((unsigned int)Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline() != 0 ? 60 : 100);
      v12 = a2 - (_QWORD)v11;
      *((_DWORD *)v10 + 12) = 40 * a4;
      v13 = a4;
      v10[2] = 0x8000;
      *((_DWORD *)v10 + 10) = 1073741888;
      *(_QWORD *)(v10 + 26) = a3;
      *((_DWORD *)v10 + 11) = a4;
      do
      {
        *v11 = *(_OWORD *)((char *)v11 + v12);
        v14 = *(_OWORD *)((char *)v11 + v12 + 16);
        v11 = (_OWORD *)((char *)v11 + 40);
        *(_OWORD *)((char *)v11 - 24) = v14;
        *((_QWORD *)v11 - 1) = *(_QWORD *)((char *)v11 + v12 - 8);
        --v13;
      }
      while ( v13 );
      v8 = LpcRequestPort(Object, v10);
      Win32FreePool(v10);
    }
    ObfDereferenceObject(Object);
  }
  return v8;
}
