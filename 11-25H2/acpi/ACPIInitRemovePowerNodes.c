/*
 * XREFs of ACPIInitRemovePowerNodes @ 0x14004B6CC
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1400557B8 (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 */

void __fastcall ACPIInitRemovePowerNodes(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx

  v2 = 0LL;
  do
  {
    v3 = a1[v2 + 51];
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 40);
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 )
        goto LABEL_18;
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 != v4 )
        goto LABEL_18;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      a1[v2 + 51] = 0LL;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 <= 4 );
  v7 = a1[56];
  if ( v7 )
  {
    v8 = (_QWORD *)(v7 + 40);
    v9 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
LABEL_18:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    a1[56] = 0LL;
  }
  v11 = a1 + 57;
  v12 = 5LL;
  do
  {
    if ( *v11 )
    {
      AMLIDereferenceHandleEx(*v11);
      *v11 = 0LL;
    }
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = a1[62];
  if ( v13 )
  {
    AMLIDereferenceHandleEx(v13);
    a1[62] = 0LL;
  }
}
