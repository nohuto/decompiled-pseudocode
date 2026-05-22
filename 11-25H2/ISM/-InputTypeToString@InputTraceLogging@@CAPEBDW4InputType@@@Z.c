/*
 * XREFs of ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180077810
 * Callers:
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x18001A650 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessor.c)
 *     ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x18001C0B4 (-Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorSt.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z @ 0x18001C5F4 (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x18001E560 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800309C0 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180031A2C (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x18004DF28 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 *     ?DropInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18009AFA4 (-DropInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z @ 0x1800F1EC4 (-UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  const char *result; // rax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  const char *v11; // rdx

  if ( a1 > 4096 )
  {
    if ( a1 > 0x80000 )
    {
      switch ( a1 )
      {
        case 0x100000:
          return "Dock";
        case 0x200000:
          return "MPCEyeGaze";
        case 0x400000:
          return "MPCHomeGesture";
        case 0x800000:
          return "QMsg";
        default:
          result = "TouchpadShellGesture";
          if ( a1 != 0x1000000 )
            return "UNKNOWN";
          break;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 0x80000:
          return "LampArray";
        case 0x2000:
          return "MPCSpatialController";
        case 0x4000:
          return "Gaze";
        case 0x8000:
          return "DInputController";
        case 0x10000:
          return "XInputController";
        case 0x20000:
          return "MPCHead";
        default:
          v11 = "UNKNOWN";
          if ( a1 == 0x40000 )
            return "MPCVoice";
          return v11;
      }
    }
  }
  else if ( a1 == 4096 )
  {
    return "RawMouse";
  }
  else
  {
    if ( a1 <= 32 )
    {
      if ( a1 == 32 )
        return "Touchpad";
      if ( !a1 )
        return "Unknown";
      v1 = a1 - 1;
      if ( !v1 )
        return "Pointer";
      v2 = v1 - 1;
      if ( !v2 )
        return "Mouse";
      v3 = v2 - 2;
      if ( !v3 )
        return "Keyboard";
      v4 = v3 - 4;
      if ( !v4 )
        return "Touch";
      if ( v4 == 8 )
        return "Pen";
      return "UNKNOWN";
    }
    v6 = a1 - 64;
    if ( v6 )
    {
      v7 = v6 - 64;
      if ( v7 )
      {
        v8 = v7 - 128;
        if ( v8 )
        {
          v9 = v8 - 256;
          if ( v9 )
          {
            v10 = v9 - 512;
            if ( v10 )
            {
              if ( v10 != 1024 )
                return "UNKNOWN";
              return "Heat";
            }
            else
            {
              return "MPCController";
            }
          }
          else
          {
            return "MPCHand";
          }
        }
        else
        {
          return "HID";
        }
      }
      else
      {
        return "Button";
      }
    }
    else
    {
      return "GameController";
    }
  }
  return result;
}
