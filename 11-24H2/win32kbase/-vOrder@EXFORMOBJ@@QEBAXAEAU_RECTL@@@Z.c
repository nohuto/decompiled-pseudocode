/*
 * XREFs of ?vOrder@EXFORMOBJ@@QEBAXAEAU_RECTL@@@Z @ 0x1400FFED0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EXFORMOBJ::vOrder(float **this, struct _RECTL *a2)
{
  float v4; // xmm1_4
  LONG *p_right; // rax
  LONG left; // ecx
  LONG v7; // edx
  float v8; // xmm1_4
  LONG *p_bottom; // rax
  LONG *p_top; // rbx
  LONG v11; // ecx
  LONG v12; // edx

  if ( ((_BYTE)(*this)[8] & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v4 = **this;
  p_right = &a2->right;
  if ( v4 < 0.0 )
  {
    left = a2->left;
    v7 = *p_right;
    if ( a2->left < *p_right )
      goto LABEL_9;
    if ( v4 < 0.0 )
      goto LABEL_5;
  }
  left = a2->left;
  v7 = *p_right;
  if ( a2->left > *p_right )
  {
LABEL_9:
    a2->left = v7;
    *p_right = left;
  }
LABEL_5:
  v8 = (*this)[3];
  p_bottom = &a2->bottom;
  p_top = &a2->top;
  if ( v8 >= 0.0 )
    goto LABEL_6;
  v11 = *p_top;
  v12 = *p_bottom;
  if ( *p_top < *p_bottom )
    goto LABEL_15;
  if ( v8 >= 0.0 )
  {
LABEL_6:
    v11 = *p_top;
    v12 = *p_bottom;
    if ( *p_top <= *p_bottom )
      return;
LABEL_15:
    *p_top = v12;
    *p_bottom = v11;
  }
}
